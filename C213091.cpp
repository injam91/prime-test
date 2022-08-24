#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in("input.txt");
	ofstream out("output.txt");

	int n,i;
	while(in>>n)
	{
		if(n==0 || n==1)
			out<<n<<" is a composite number"<<endl;
		else
		{
			int flag=0;
			for(i=2;i<n;i++)
			{
				if(n%i==0){
					flag=1;
					break;
				}

			}
			if(flag==1)
				out<<n<<" is a composite number"<<endl;
			else
				out<<n<<" is a prime number"<<endl;
		}

	}

	return 0;
}



