void sqrt_estimate (double s, double x0)
{

	double x1 = 0, x2 = 0, temp = 0;

	double epsilon = 1e-6;

	int i = 0;

	printf("\n");

	do
	 {

		if (i == 0) {

			x1 = (s + s/x0)/2;

		} else {

			x1 = temp;

		}

		x2 = (x1 + (s/x1))/2;

		temp = x2; i++;

		printf("Status: current \"old\" = %f, current \"new\" = %f\n", x1, x2);

	}
	 while ((x1 - x2) > epsilon);

	cout << "\nThe square-root of " << s << " is approximated as: " << x2;

	printf("\nThe number of repeated approximations: %d\n", i);

}
