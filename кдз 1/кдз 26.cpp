/*26) For the structure of the Warehouse, write a constructor and destructor.

27) for Warehouse structure write copy constructor and assignment operator.

28) for the Warehouse structure, write a method that calculates the total cost of all goods in the warehouse.

29) for the Warehouse structure, write methods that return the unit cost of the heaviest item and the price of the item with the highest unit cost, respectively.

30) for the structure of Warehouse, write a method that orders an array of goods at a specific cost.*/
#include <iostream>
using namespace std;
struct Product
{
	const char* name;
	unsigned int price;
	unsigned int weight;

	Product() :
    price(0),
    weight(0), name("nothing")
	{}

	Product(const char* name, int price, int weight) :
		price(price),
		weight(weight), name(name)
	{}

	Product(const Product & m)
		: price(m.price),
		weight(m.weight),
		name(m.name)
	{
		price = m.price;
		weight = m.weight;
		name = m.name;
		cout<<" Pcc is working ";
	}

	Product& operator=(Product& m)
	{
		price = m.price;
		weight = m.weight;
		name = m.name;
		cout<<" Po= is working ";
		return *this;
	}
};

struct Warehouse
{
	Product* Goods;
	unsigned int size;

	Warehouse(const Warehouse &m)
	{
		size = m.size;
		this->Goods = new Product[size];
		for (int i = 0; i < size; i++)
		{
			Goods[i] = m.Goods[i];
		}
		cout << " Wcc is working ";
	}

	Warehouse(Product* a, int n)
	{
		Goods = new Product[n];
		for (int i = 0; i < n; i++)
		{
			Goods[i] = a[i];
		}
		size = n;
	}

	Warehouse& operator=(Warehouse& m)
	{
		size = m.size;
		for(int i = 0; i < size; i++)
		{
			Goods[i] = m.Goods[i];
		}

		cout<<" Wo= is working ";
		return *this;
	}
	void dengi(){
	    int sum = 0;
	for(int i = size; i < size; i++){
        sum = sum + this ->Goods[i].price;
	}
	cout<<sum;
	}
	void maxprice(){
	    unsigned int a;
	    a = Goods[0].price;
	    int b = 0;
	    unsigned int c;
	for(int i = 1; i < size; i++){
        if(a < Goods[i].price){
            a = Goods[i].price;
            b = i;
        }
	}
	c = Goods[b].weight;
	cout<<" "<<c<<" ";
	}
void maxweight(){
	    unsigned int a;
	    a = Goods[0].weight;
	    int b = 0;
	    unsigned int c;
	for(int i = 1; i < size; i++){
        if(a < Goods[i].weight){
            a = Goods[i].weight;
            b = i;
        }
	}
	c = Goods[b].price;
	cout<<" "<<c<<" ";
	}
	void swap(Product * Goods[i], Product * Goods[j])
{
Product * temp = Goods[i];
Goods[i] = Goods[j];
Goods[j] = temp;
}
void sort()
{
for (int i = 0;i < size;i++)
{
for (int j = 0; j < size - i - 1; j++)
{
if (Goods[j].price > Goods[j + 1].price)
{
swap(Goods[j], Goods[j + 1]);
}
}
}
}
void uporyad(){
for(int i = 0; i < size - 1; i++){
    if(Goods[i])
}
}
	~Warehouse()
	{
		cout<<" Wd is working ";
		delete[] this->Goods;
	}
};

int main()
{
	Product a;
	Product b("Coffee", 250, 12);

	Product pr[2];

	pr[0] = b;
	pr[1] = a;

	Warehouse c(pr, 2);
	Warehouse d(c);
	c = d;
	c.dengi();
	c.maxprice();
	c.maxweight();
	*c.Goods = a;
	cout<<a.name<<b.name<<c.size;
c.~Warehouse();
d.~Warehouse();
	return 0;
}
