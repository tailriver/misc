double quadratic_max_x(double (*f)(double), double x1, double x2) {
	double epsilon = 1e-7;
	double xa, xb, xc;

	// search
	xa = x1 < x2 ? x1 : x2;
	xb = x1 < x2 ? x2 : x1;
	while (xb - xa > epsilon) {
		xc = (xa + xb) / 2.0;
		if ( f(xa) < f(xb) )
			xa = xc;
		else
			xb = xc;
	}

	return f(x1) < f(x2) ? ( f(x2) < f(xc) ? xc : x2 ) : x1;
}

double quadratic_max(double (*f)(double), double x1, double x2) {
	return f( quadratic_max_x(f, x1, x2) );
}
