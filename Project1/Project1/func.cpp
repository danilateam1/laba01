void my_exp(double a, double e, int* add_o, double* add_w) {
	double s=1.0;
	double m=1.0;
	double i=0.0;
	while (m >= e) {
		m *= (a / (i + 1));
		s += m;
		i+=1.0;
	}
	i += 1;
	*add_o = i;
	*add_w = s;

	if (a == 0) {
		*add_o = 1.0;
		*add_w = 1.0;
	}
}




void my_sin(double a, double e, int* add_o, double* add_w) {
	

	double s = a;
	double m = a;
	double i = 0.0;
	while (((m < 0) ? -m : m) >= e) {
		m *= ((-a) * a / ((2 * i + 2) * (2 * i + 3)));
		s += m;
		i += 1.0;
	}
	i += 1;
	*add_o = i;
	*add_w = s;

	if (a == 0) {
		*add_o = 1.0;
		*add_w = 0.0;
	}
}



void my_cos(double a, double e, int* add_o, double* add_w) {


	double s = 1.0;
	double m = 1.0;
	double i = 0.0;
	while (((m < 0) ? -m : m) >= e) {
		m *= ((-a) * a / ((2 * i + 1) * (2 * i + 2)));
		s += m;
		i += 1.0;
	}
	i += 1;
	*add_o = i;
	*add_w = s;

	if (a == 0) {
		*add_o = 1.0;
		*add_w = 1.0;
	}
}



void my_sh(double a, double e, int* add_o, double* add_w) {
	double s = a;
	double m = a;
	double i = 0.0;
	while (m >= e) {
		m *= (a * a / ((2 * i + 2) * (2 * i + 3)));
		s += m;
		i += 1.0;
	}
	i += 1;
	*add_o = i;
	*add_w = s;

	if (a == 0) {
		*add_o = 1.0;
		*add_w = 0.0;
	}
}



void my_lnplus1(double a, double e, int* add_o, double* add_w) {


	double s = a;
	double m = a;
	double i = 0.0;
	while (((m < 0) ? -m : m) >= e) {
		m *= ((-a)*(i+1)/(i + 2));
		s += m;
		i += 1.0;
	}
	i += 1;
	*add_o = i;
	*add_w = s;

	if (a == 0) {
		*add_o = 1.0;
		*add_w = 0.0;
	}
}

