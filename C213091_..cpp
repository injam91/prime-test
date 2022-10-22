#include<iostream>
#include<fstream>
using namespace std;
class product{
public:
	int product_id;
	string product_cat,product_name;
};
class sold_product : public product{
public:
	int price;
	string customer_id;
};
class bought_product : public product{
public:
	int buyer_id,price;
	string buyer_name;
};
int main()
{
	ifstream r_in("productIN.txt");
	ofstream r_out("productOut.txt");
	ifstream c_in("customerIN.txt");
	ofstream c_out("customerOut.txt");
	ifstream b_in("buyerIN.txt");
	ofstream b_out("buyerOut.txt");

	product r1,r2,r3;
	sold_product c1,c2,c3;
	bought_product b1,b2,b3;

	rin>>r1.product_id;
	rin.ignore();
	getline(rin,r1.product_cat);
	getline(rin,r1.product_name);
	rout<<"Product ID : "<<r1.product_id<<endl;
	rout<<"Product Chatagory : "<<r1.product_cat<<endl;
	rout<<"Product Name : "<<r1.product_name<<endl;

	c_in>>c1.product_id;
	c_in.ignore();
	getline(c_in,c1.product_cat);
	getline(c_in,sp1.product_name);
	c_in>>c1.price;
	c_in.ignore();
	getline(c_in,c1.customer_id);
	c_out<<"Product ID : "<<c1.product_id<<endl;
	c_out<<"Product Chatagory : "<<c1.product_cat<<endl;
	c_out<<"Product Name : "<<c1.product_name<<endl;
	c_out<<"Price : "<<sp1.price<<endl;
	c_out<<"Customer ID : "<<c1.customer_id<<endl;

	b_in>>b1.product_id;
	b_in.ignore();
	getline(b_in,b1.product_cat);
	getline(b_in,b1.product_name);
	b_in>>b1.buyer_id>>b1.price;
	b_in.ignore();
	getline(b_in,b1.buyer_name);
	b_out<<"Product ID : "<<b1.product_id<<endl;
	b_out<<"Product Chatagory : "<<b1.product_cat<<endl;
	b_out<<"Product Name : "<<b1.product_name<<endl;
	b_out<<"Buyer ID : "<<b1.buyer_id<<endl;
	b_out<<"Price : "<<b1.price<<endl;
	b_out<<"Buyer Name : "<<b1.buyer_name<<endl;



	return 0;
}
