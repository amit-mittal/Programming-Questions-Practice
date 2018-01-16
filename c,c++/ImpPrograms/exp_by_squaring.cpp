template <typename T>
T expt(T p, unsigned q)
{
	T r(1);

	while (q != 0) {
		if (q % 2 == 1) {    // q is odd
			r *= p;
			q--;
		}
		p *= p;
		q /= 2;
	}

	return r;
}