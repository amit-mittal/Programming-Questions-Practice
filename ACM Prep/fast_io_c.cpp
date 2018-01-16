#include <cstdio>
typedef unsigned int uint;
typedef unsigned long long int ull;
uint const M=1e9+7;

enum endl_faszom { endl };
template <size_t max_input_size,size_t max_output_size>
struct fast_io
{
	typedef fast_io self;
	fast_io(): input_size(0), s(input), d(output)
	{
		read();
	}
	~fast_io()
	{
		write();
	}
	void read()
	{
		input_size=fread(input,1,max_input_size,stdin);
		input[input_size]=0;
		s=input;
	}
	void write()
	{
		fwrite(output,1,d-output,stdout);
		d=output;
	}
	void skip_blank()
	{
		while(0<*s && *s<=32)
			++s;
	}
	uint read_uint()
	{
		skip_blank();
		uint r=0;
		while('0'<=*s && *s<='9')
			r=r*10+ *s++ -'0';
		return r;
	}
	ull read_ull()
	{
		skip_blank();
		ull r=0;
		while('0'<=*s && *s<='9')
			r=r*10+ *s++ -'0';
		return r;
	}
	int read_int()
	{
		skip_blank();
		int r=0;
		bool neg=0;
		if(*s=='-' || *s=='+')
			neg=*s++=='-';
		while('0'<=*s && *s<='9')
			r=r*10+ *s++ -'0';
		return neg?-r:r;
	}
	fast_io& operator>> (uint &r)
	{
		r=read_uint();
		return *this;
	}
	fast_io& operator>> (ull &r)
	{
		r=read_ull();
		return *this;
	}
	fast_io& operator>> (int &r)
	{
		r=read_int();
		return *this;
	}
	fast_io& operator<< (uint r)
	{
		d+=sprintf(d,"%u",r);
		return *this;
	}
	fast_io& operator<< (ull r)
	{
		d+=sprintf(d,"%llu",r);
		return *this;
	}
	fast_io& operator<< (endl_faszom x)
	{
		*d++='\n';
		return *this;
	}
	fast_io& operator<< (char const *s)
	{
		d+=sprintf(d,"%s",s);
		return *this;
	}
	size_t input_size;
	char input[max_input_size+1];
	char const *s;
	char output[max_output_size+1];
	char *d;
};
fast_io<8*1024*1024,8*1024*1024> io;

uint pow_mod(uint base, uint exp, uint mod)
{
	uint r=1;
	uint p=base;
	while(exp)
	{
		if(exp%2)
			r=ull(r)*p%mod;
		if(exp/=2)
			p=ull(p)*p%mod;
	}
	return r;
}

main()
{
	uint T;
	io >> T;
	for(uint t=1; t<=T; ++t)
	{
		ull V;
		uint N;
		io >> V >> N;
		uint A0,B0,C0,M0,A1,B1,C1,M1;
		uint P[128];
		uint Q[128];
		io >> P[0] >> P[1] >> A0 >> B0 >> C0 >> M0;
		io >> Q[0] >> Q[1] >> A1 >> B1 >> C1 >> M1;
		ull A02=ull(A0)*A0%M0;
		ull A12=ull(A1)*A1%M1;
		for(uint i=2; i<N; ++i)
		{
			P[i]=(A02*P[i-1]+ull(B0)*P[i-2]+C0)%M0;
			Q[i]=(A12*Q[i-1]+ull(B1)*Q[i-2]+C1)%M1;
		}
		uint e=1;
		bool ze=0;
		for(uint i=0; !ze && i<N; ++i)
		{
			ull L=ull(P[i])*M1+Q[i]+1;
			if(L==1)
				ze=1;
			else e=(L-1)%(M-1)*e%(M-1);
		}
		uint r;
		if(ze)
			r=1;
		else if(V%M==0)
			r=0;
		else r=pow_mod(V%M,e,M);
		io << r << endl;
	}
}

