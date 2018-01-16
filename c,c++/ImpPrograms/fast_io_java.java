import java.util.*;
import java.math.*;
import java.io.*;

public class Main
	{
	public static void main(String args[]) throws IOException
		{
		InputReader in=new InputReader(System.in);
		PrintWriter out=new PrintWriter(System.out);
		int a=in.readInt();
		int b=in.readInt();
		int n=in.readInt();
		long ans=0;
		long mod=1000000007;
		long Inv[]=new IntegerUtils().inverses(n+1,(int)mod);
		long Fact[]=new long[n+1];
		long InvFact[]=new long[n+1];
		Fact[0]=1;
		InvFact[0]=1;
		for(int i=1;i<=n;i++)
			{
			Fact[i]=(Fact[i-1]*i)%mod;
			InvFact[i]=(InvFact[i-1]*Inv[i])%mod;
			//System.out.println(Fact[i]*InvFact[i]%mod);
			}

		for(int numA=0;numA<=n;numA++)
			{
			int numB=n-numA;
			int sum=a*numA+b*numB;
			if(valid(sum,a,b))
				{
				//System.out.println("valid ("+numA+","+numB+","+sum+")");
				long pro=Fact[n];
				pro=(pro*InvFact[numA])%mod;
				pro=(pro*InvFact[numB])%mod;
				ans+=pro;
				ans%=mod;
				}
			}
		System.out.println(ans);
		out.close();
		}

	private static boolean valid(int sum,int a,int b)
		{
		while(sum>0)
			{
			if(sum%10!=a&&sum%10!=b)
				return false;
			sum/=10;
			}
		return true;
		}
	}

class Factor
	{
	int number;
	int occurences;

	public Factor(int number,int occurences)
		{
		this.number=number;
		this.occurences=occurences;
		}
	}

class IntegerUtils
	{
	
	//Calculate inverses of 1-->N modulo mod
	public static long[] inverses(int N,int mod)
		{
		long inv[]=new long[N+1];
		inv[1]=1;
		for(int i=2;i<=N;i++)
			inv[i]=(mod-((mod/i)*inv[mod%i])%mod)%mod;
		return inv;
		}
	}

class InputReader
	{
	private InputStream stream;
	private byte[] buf=new byte[1024];
	private int curChar;
	private int numChars;
	private SpaceCharFilter filter;

	public InputReader(InputStream stream)
		{
		this.stream=stream;
		}

	public int read()
		{
		if(numChars==-1)
			throw new InputMismatchException();
		if(curChar>=numChars)
			{
			curChar=0;
			try
				{
				numChars=stream.read(buf);
				} catch (IOException e)
				{
				throw new InputMismatchException();
				}
			if(numChars<=0)
				return -1;
			}
		return buf[curChar++];
		}

	public int readInt()
		{
		int c=read();
		while (isSpaceChar(c))
			c=read();
		int sgn=1;
		if(c=='-')
			{
			sgn=-1;
			c=read();
			}
		int res=0;
		do
			{
			if(c<'0'||c>'9')
				throw new InputMismatchException();
			res*=10;
			res+=c-'0';
			c=read();
			} while (!isSpaceChar(c));
		return res*sgn;
		}

	public boolean isSpaceChar(int c)
		{
		if(filter!=null)
			return filter.isSpaceChar(c);
		return isWhitespace(c);
		}

	public static boolean isWhitespace(int c)
		{
		return c==' '||c=='\n'||c=='\r'||c=='\t'||c==-1;
		}

	public char readCharacter()
		{
		int c=read();
		while (isSpaceChar(c))
			c=read();
		return (char) c;
		}

	public interface SpaceCharFilter
		{
		public boolean isSpaceChar(int ch);
		}
	}