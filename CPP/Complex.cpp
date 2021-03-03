class complex
{
	float real;
	float imag;

public:
	void input(float r)
	{
		real = r;
		imag = 100;
	}
};
	
int main()
{
	complex c;
	c.input(20);
}

/*
	Encapsulation: The wrapping up of data and function into a common
					unit (called class).
					
					Emphasis on keeping data private
					
*/
