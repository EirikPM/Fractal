#ifndef MANDELBROT_H_
#define  MANDELBROT_H_

class Mandelbrot {
	private:


	public:
		//CONST
		static const int  MAX_ITERATIONS = 1000;

		Mandelbrot();
		~Mandelbrot();
		static int getIterations(double x, double y);
};

#endif // !MANDELBROT_H_