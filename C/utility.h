int factors(int n)
{	
	int i, f=0;
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	return f;
}

char[] figures_to_words(double n)
{

}
