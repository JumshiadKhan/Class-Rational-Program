#include <iostream>
using namespace std;
class Rational{
	
	private:
		int p,q;
		bool isequal;
    public:
    	Rational()
    	{
    	  p=q=1;
		}
		Rational(int p, int q)
		{
		reduce(p,q);
		this->p=p;
		this->q=q;
		
		}
		Rational(const Rational &obj)
		{ 
		this->p=obj.p;
		this->q=obj.q;
		
			
		}
		int gcdcalc(int p ,int q)
		{
			int gcd;
			for(int i=1;i<=p && i<=q;i++)
			{
			  if(p%i==0 && q%i==0)
			  {
			  	gcd=i;
			  }
			}
			return gcd;
		}
		void reduce(int &p,int &q)
		{
			if(q!=0)
			{
			int gcd =gcdcalc(p,q);
			p=p/gcd;
			q=q/gcd;
			}
			else {
				cout<<"Denominator can not be zero";
			}
		}
		bool equalfunc(Rational obj)
		{
			if(p==obj.p && q==obj.q)
			return true;
			
			return false;
		}
		void getvalueofreduce()
		{
			cout<<p<<"/"<<q;
			cout<<endl;
			}	
		void getequalresult()
		{
			cout<<"the two rational numbers are"<<isequal;
			}	
		void printresult()
		{
			getvalueofreduce();
			getequalresult();
			}	
	
};

int main()
{
	int p=6,q=36;
	Rational ab(6,36);
	Rational obj1=ab;
	obj1.printresult();
}
