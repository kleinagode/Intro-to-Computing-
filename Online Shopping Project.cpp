#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int decArray[100];
float total = 0;

string Color[] = { "Black", "White", "Pink", "Grey", "Red", "Blue", "Green", "Purple" };
string Size[] = { "XXL", "XL", "L", "M", "S", "XS" };

string Mhoodies[] = { "Plain Color Hoodie", "Nike Hoodie", "Graphic DesignHoodie", "Champion Hoodie", "Off-WhiteHoodie" };
string Whoodies[] = { "Plain Color Hoodie", "Nike Hoodie", "Flower Hoodie", "Puma Hoodie", "Calvin Klein Hoodie" };
int MhoodiesQTY[] = { 30, 30, 30, 30, 30 };
int WhoodiesQTY[] = { 30, 30, 30, 30, 30 };
double hoodiesPrice[] = { 30, 50, 40, 75, 80 };
int MhoodiesID[] = { 111, 112, 113, 114, 115 };
int WhoodiesID[] = { 101, 102, 103, 104, 105 };

string Mtshirts[] = { "Plain Color Tshirt", "Nike Tshirt", "Graphic Design Tshirt", "Champion Tshirt", "Off-White Tshirt" };
string Wtshirts[] = { "PlainColorTshirt", "NikeTshirt", "FlowerTshirt", "PumaTshirt", "CalvinKleinTshirt" };
int MtshirtsQTY[] = { 30, 30, 30, 30, 30 };
int WtshirtsQTY[] = { 30, 30, 30, 30, 30 };
double tshirtsPrice[] = { 20, 35, 45, 70, 55 };
int MtshirtsID[] = { 211, 212, 213, 214, 215 };
int WtshirtsID[] = { 201, 202, 203, 204, 205 };

string Mpants[] = { "Plain Color Pants", "Nike Pants", "Graphic Design Pants", "Champion Pants", "Off-White Pants" };
string Wpants[] = { "Plain Color Pants", "Nike Pants", "Flower Pants", "Puma Pants", "Calvin Klein Pants" };
int MpantsQTY[] = { 30, 30, 30, 30, 30 };
int WpantsQTY[] = { 30, 30, 30, 30, 30 };
double pantsPrice[] = { 25, 50, 45, 65, 30 };
int MpantsID[] = { 311, 312, 313, 314, 315 };
int WpantsID[] = { 301, 302, 303, 304, 305 };

string Munderwear[] = { "Calvin Klein Underwear", "Nike Underwear", "PSD Underwear", "Hugo Underwear", "Hilfiger Underwear" };
string Wunderwear[] = { "Calvin Klein Underwear", "Skechers Underwear", "Victoria Secret Underwear", "Lovable Underwear", "Jockey Underwear" };
int MunderwearQTY[] = { 30, 30, 30, 30, 30 };
int WunderwearQTY[] = { 30, 30, 30, 30, 30 };
double underwearPrice[] = { 50, 60, 55, 75, 45 };
int MunderwearID[] = { 411, 412, 413, 414, 415 };
int WunderwearID[] = { 401, 402, 403, 404, 405 };


class mhoodie
{
public:
	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: "<< id << endl;
		cout <<"PRICE:" << "$"<< price << endl;
		cout << "XXL QTY: " << qty_xxl<<endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;

	}

};

class whoodie
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

class mshirt
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

class wshirt
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

class mpants
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

class wpants
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

class munderwear
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

class wunderwear
{
public:

	int name[100];
	int qty_xxl, qty_xl, qty_l, qty_m, qty_s, qty_xs;
	int price;
	int id;

	void print()
	{
		cout << endl << endl;
		cout << "NAME: ";
		for (int j = 0; j < 100; j++)
		{
			if (name[j] != 0)
				cout << char(name[j]);
			else
				break;

		}

		cout << endl;
		cout << "Item ID: " << id << endl;
		cout << "PRICE:" << "$" << price << endl;
		cout << "XXL QTY: " << qty_xxl << endl;
		cout << "XL QTY: " << qty_xl << endl;
		cout << "L QTY: " << qty_l << endl;
		cout << "M QTY: " << qty_m << endl;
		cout << "S QTY: " << qty_s << endl;
		cout << "XS QTY: " << qty_xs << endl;
	}
};

void logo()
{
	cout << "      ::::::::  :::::::::: ::::::::::              :::::::::  :::::::::      :::     ::::    ::: ::::::::: " << endl;
	cout << "    :+:    :+: :+:        :+:                     :+:    :+: :+:    :+:   :+: :+:   :+:+:   :+: :+:    :+:" << endl;
	cout << "   +:+    +:+ +:+        +:+                     +:+    +:+ +:+    +:+  +:+   +:+  :+:+:+  +:+ +:+    +:+  " << endl;
	cout << "  +#+    +:+ :#::+::#   :#::+::#  +#++:++#++:++ +#++:++#+  +#++:++#:  +#++:++#++: +#+ +:+ +#+ +#+    +:+   " << endl;
	cout << " +#+    +#+ +#+        +#+                     +#+    +#+ +#+    +#+ +#+     +#+ +#+  +#+#+# +#+    +#+   " << endl;
	cout << "#+#    #+# #+#        #+#                     #+#    #+# #+#    #+# #+#     #+# #+#   #+#+# #+#    #+#     " << endl;
	cout << "########  ###        ###                     #########  ###    ### ###     ### ###    #### #########       " << endl;
}


void decConversion(string input)
{
	int length1;
	char mychar;

	//Clears the array each time
	for (int l = 0; l < 100; l++)
	{
		decArray[l] = 0;
	}

	length1 = input.length();

	//First converting the string into a char and than giving it a DEC value from the ASCII table
	for (int i = 0; i < length1; i++)
	{
		mychar = input[i];

		//Stroing the DEC value into a decArray for later use
		decArray[i] = int(mychar);

	}
}


void load_inventory()
{
	mhoodie mh;
	whoodie wh;
	mshirt ms;
	wshirt ws;
	mpants mp;
	wpants wp;
	munderwear mu;
	wunderwear wu;

	fstream inventory_file;

	inventory_file.open("Men_hoodies.dat", ios::app | ios::binary);

	for (int i = 0; i < 5; i++)
	{
		decConversion(Mhoodies[i]);
		for (int x = 0; x < 100; x++)
		{
			mh.name[x] = decArray[x];
		}
		mh.qty_xxl = 5;
		mh.qty_xl = 5;
		mh.qty_l = 5;
		mh.qty_m = 5;
		mh.qty_s = 5;
		mh.qty_xs = 5;
		mh.price = hoodiesPrice[i];
		mh.id = MhoodiesID[i];

		inventory_file.write((char*)&mh, sizeof(mh));

	}

	inventory_file.close();

	inventory_file.open("Women_hoodies.dat", ios::app | ios::binary);

	for (int j = 0; j < 5; j++)
	{
		decConversion(Whoodies[j]);
		for (int x = 0; x < 100; x++)
		{
			wh.name[x] = decArray[x];
		}
		wh.qty_xxl = 5;
		wh.qty_xl = 5;
		wh.qty_l = 5;
		wh.qty_m = 5;
		wh.qty_s = 5;
		wh.qty_xs = 5;
		wh.price = hoodiesPrice[j];
		wh.id = WhoodiesID[j];

		inventory_file.write((char*)&wh, sizeof(wh));

	}

	inventory_file.close();

	inventory_file.open("Men_shirt.dat", ios::app | ios::binary);

	for (int k = 0; k < 5; k++)
	{
		decConversion(Mtshirts[k]);
		for (int x = 0; x < 100; x++)
		{
			ms.name[x] = decArray[x];
		}
		ms.qty_xxl = 5;
		ms.qty_xl = 5;
		ms.qty_l = 5;
		ms.qty_m = 5;
		ms.qty_s = 5;
		ms.qty_xs = 5;
		ms.price = tshirtsPrice[k];
		ms.id = MtshirtsID[k];

		inventory_file.write((char*)&ms, sizeof(ms));

	}

	inventory_file.close();

	inventory_file.open("Women_shirt.dat", ios::app | ios::binary);

	for (int l = 0; l < 5; l++)
	{
		decConversion(Wtshirts[l]);
		for (int x = 0; x < 100; x++)
		{
			ws.name[x] = decArray[x];
		}
		ws.qty_xxl = 5;
		ws.qty_xl = 5;
		ws.qty_l = 5;
		ws.qty_m = 5;
		ws.qty_s = 5;
		ws.qty_xs = 5;
		ws.price = tshirtsPrice[l];
		ws.id = WtshirtsID[l];

		inventory_file.write((char*)&ws, sizeof(ws));

	}

	inventory_file.close();

	inventory_file.open("Men_pants.dat", ios::app | ios::binary);

	for (int n = 0; n < 5; n++)
	{
		decConversion(Mpants[n]);
		for (int x = 0; x < 100; x++)
		{
			mp.name[x] = decArray[x];
		}
		mp.qty_xxl = 5;
		mp.qty_xl = 5;
		mp.qty_l = 5;
		mp.qty_m = 5;
		mp.qty_s = 5;
		mp.qty_xs = 5;
		mp.price = pantsPrice[n];
		mp.id = MpantsID[n];

		inventory_file.write((char*)&mp, sizeof(mp));

	}

	inventory_file.close();

	inventory_file.open("Women_pants.dat", ios::app | ios::binary);

	for (int o = 0; o < 5; o++)
	{
		decConversion(Wpants[o]);
		for (int x = 0; x < 100; x++)
		{
			wp.name[x] = decArray[x];
		}
		wp.qty_xxl = 5;
		wp.qty_xl = 5;
		wp.qty_l = 5;
		wp.qty_m = 5;
		wp.qty_s = 5;
		wp.qty_xs = 5;
		wp.price = pantsPrice[o];
		wp.id = WpantsID[o];

		inventory_file.write((char*)&wp, sizeof(wp));

	}

	inventory_file.close();

	inventory_file.open("Men_underwear.dat", ios::app | ios::binary);

	for (int m = 0; m < 5; m++)
	{
		decConversion(Munderwear[m]);
		for (int x = 0; x < 100; x++)
		{
			mu.name[x] = decArray[x];
		}
		mu.qty_xxl = 5;
		mu.qty_xl = 5;
		mu.qty_l = 5;
		mu.qty_m = 5;
		mu.qty_s = 5;
		mu.qty_xs = 5;
		mu.price = underwearPrice[m];
		mu.id = MunderwearID[m];

		inventory_file.write((char*)&mu, sizeof(mu));

	}

	inventory_file.close();

	inventory_file.open("Women_underwear.dat", ios::app | ios::binary);

	for (int p = 0; p < 5; p++)
	{
		decConversion(Wunderwear[p]);
		for (int x = 0; x < 100; x++)
		{
			wu.name[x] = decArray[x];
		}
		wu.qty_xxl = 5;
		wu.qty_xl = 5;
		wu.qty_l = 5;
		wu.qty_m = 5;
		wu.qty_s = 5;
		wu.qty_xs = 5;
		wu.price = underwearPrice[p];
		wu.id = WunderwearID[p];

		inventory_file.write((char*)&wu, sizeof(wu));

	}

	inventory_file.close();


}

void print_inventory()
{
	fstream inventory_file;
	
	mhoodie mh;
	whoodie wh;
	mshirt ms;
	wshirt ws;
	mpants mp;
	wpants wp;
	munderwear mu;
	wunderwear wu;

	char cho;
	
	system("CLS");
	cout << ">>INVENTORY<<" << endl;

	inventory_file.open("Men_hoodies.dat", ios::in | ios::binary);

	cout << endl << endl << "Men Hoodies";
	while (inventory_file.read((char*)&mh, sizeof(mh)))
	{
		mh.print();
	}

	inventory_file.close();

	
	inventory_file.open("Women_hoodies.dat", ios::in | ios::binary);

	cout << endl << endl << "Women Hoodies";
	while (inventory_file.read((char*)&wh, sizeof(wh)))
	{
		wh.print();
	}

	inventory_file.close();

	
	inventory_file.open("Men_shirt.dat", ios::in | ios::binary);

	cout << endl << endl << "Men Shirts";
	while (inventory_file.read((char*)&ms, sizeof(ms)))
	{
		ms.print();
	}

	inventory_file.close();

	
	inventory_file.open("Women_shirt.dat", ios::in | ios::binary);

	cout << endl << endl << "Women Shirts";
	while (inventory_file.read((char*)&ws, sizeof(ws)))
	{
		ws.print();
	}

	inventory_file.close();

	
	inventory_file.open("Men_pants.dat", ios::in | ios::binary);

	cout << endl << endl << "Men Pants";
	while (inventory_file.read((char*)&mp, sizeof(mp)))
	{
		mp.print();
	}

	inventory_file.close();


	inventory_file.open("Women_pants.dat", ios::in | ios::binary);

	cout << endl << endl << "Woman Pants";
	while (inventory_file.read((char*)&wp, sizeof(wp)))
	{
		wp.print();
	}

	inventory_file.close();


	inventory_file.open("Men_underwear.dat", ios::in | ios::binary);

	cout << endl << endl << "Men Underwear";
	while (inventory_file.read((char*)&mu, sizeof(mu)))
	{
		mu.print();
	}

	inventory_file.close();


	inventory_file.open("Women_underwear.dat", ios::in | ios::binary);

	cout << endl << endl << "Women Underwear";
	while (inventory_file.read((char*)&wu, sizeof(wu)))
	{
		wu.print();
	}

	inventory_file.close();

	cout << endl << endl << "Press a key to exit.." << endl;
	cin >> cho;

}

void print_size()
{
	cout << "What size do you want to purchase?" << endl;
	cout << "How many of the size do you want to purchase?" << endl;
	cout << "1. XXL" << endl;
	cout << "2. XL" << endl;
	cout << "3. L" << endl;
	cout << "4. M" << endl;
	cout << "5. S" << endl;
	cout << "6. XS" << endl;
	
}

void print_color()
{
	int cho = 1;

	cout << "What color would you like?" << endl;
	
	for (int i = 0; i < 8; i++)
	{
		cout <<cho<<". "<< Color[i] << endl;
		cho++;
	}

}


void receipt()
{
	string text;
	ifstream fin;
	ofstream fout;
	char cho;

	fout.open("receipt.txt", ios::app);
	fout << endl << endl << "Total price with tax: $" << total << endl;
	fout.close();


	fin.open("receipt.txt");
	
	system("CLS");

	logo();
	cout << endl << endl;
	cout << "RECEIPT " << endl;

	while (getline(fin, text))
	{
		cout << text<<endl;
	}
	fin.close();

	cout << endl << endl << "Press a key to exit.." << endl;
	cin>>cho;

}

void purchase()
{
	int cho, color_cho, size_cho, size_qty, n = 1, sw = 0;
	bool logSwitch = true;
	int item_id;
	
	fstream inventory_file;
	ofstream fout;

	cout << endl << endl;

	cout << "1. Mens Hoodies" << endl;
	cout << "2. Womens Hoodies" << endl;
	cout << "3. Mens Tshirts" << endl;
	cout << "4. Womens Tshirts" << endl;
	cout << "5. Mens Pants" << endl;
	cout << "6. Womens Pants" << endl;
	cout << "7. Mens Underwear" << endl;
	cout << "8. Womens Underwear" << endl;
	cout << "9. Exit" << endl;
	cout << "What do you want to purchase? " << endl;
	cin >> cho;

	switch (cho)
	{
	case 1:
		
		mhoodie mh;

		while (n)
		{
			inventory_file.open("Men_hoodies.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&mh, sizeof(mh)))
			{
				mh.print();

			}

			inventory_file.close();

			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Men_hoodies.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&mh, sizeof(mh)))
			{

				if (item_id == mh.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (mh.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mh.qty_xxl<<endl;
						}
						else
						{
							mh.qty_xxl -= size_qty;
							
							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mh.name[j] != 0)
									fout << char(mh.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << mh.price * size_qty << endl <<
								"Price with tax: $"<<(mh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mh.price * size_qty) * 1.065;
						}
							
					}
					else if (size_cho == 2)
					{
						if (mh.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mh.qty_xl << endl;
						}
						else
						{
							mh.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mh.name[j] != 0)
									fout << char(mh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << mh.price * size_qty << endl <<
								"Price with tax: $" << (mh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (mh.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mh.qty_l << endl;
						}
						else
						{
							mh.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mh.name[j] != 0)
									fout << char(mh.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << mh.price * size_qty << endl <<
								"Price with tax: $" << (mh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (mh.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mh.qty_m << endl;
						}
						else
						{
							mh.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mh.name[j] != 0)
									fout << char(mh.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << mh.price * size_qty << endl <<
								"Price with tax: $" << (mh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (mh.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mh.qty_s << endl;
						}
						else
						{
							mh.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mh.name[j] != 0)
									fout << char(mh.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << mh.price * size_qty << endl <<
								"Price with tax: $" << (mh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (mh.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mh.qty_xs << endl;
						}
						else
						{
							mh.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mh.name[j] != 0)
									fout << char(mh.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << mh.price * size_qty << endl <<
								"Price with tax: $" << (mh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mh.price * size_qty) * 1.065;
							
						}
					}

					


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(mh)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&mh, sizeof(mh));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 2:
		whoodie wh;

		while (n)
		{
			inventory_file.open("Women_hoodies.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&wh, sizeof(wh)))
			{
				wh.print();

			}

			inventory_file.close();

			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Women_hoodies.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&wh, sizeof(wh)))
			{

				if (item_id == wh.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (wh.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wh.qty_xxl << endl;
						}
						else
						{
							wh.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wh.name[j] != 0)
									fout << char(wh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wh.price * size_qty << endl <<
								"Price with tax: $" << (wh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wh.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (wh.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wh.qty_xl << endl;
						}
						else
						{
							wh.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wh.name[j] != 0)
									fout << char(wh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wh.price * size_qty << endl <<
								"Price with tax: $" << (wh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (wh.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wh.qty_l << endl;
						}
						else
						{
							wh.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wh.name[j] != 0)
									fout << char(wh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wh.price * size_qty << endl <<
								"Price with tax: $" << (wh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (wh.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wh.qty_m << endl;
						}
						else
						{
							wh.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wh.name[j] != 0)
									fout << char(wh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wh.price * size_qty << endl <<
								"Price with tax: $" << (wh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (wh.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wh.qty_s << endl;
						}
						else
						{
							wh.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wh.name[j] != 0)
									fout << char(wh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wh.price * size_qty << endl <<
								"Price with tax: $" << (wh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wh.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (wh.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wh.qty_xs << endl;
						}
						else
						{
							wh.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wh.name[j] != 0)
									fout << char(wh.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wh.price * size_qty << endl <<
								"Price with tax: $" << (wh.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wh.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(wh)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&wh, sizeof(wh));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 3:
		mshirt ms;

		while (n)
		{
			inventory_file.open("Men_shirt.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&ms, sizeof(ms)))
			{
				ms.print();
			}

			inventory_file.close();

			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Men_shirt.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&ms, sizeof(ms)))
			{

				if (item_id == ms.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (ms.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ms.qty_xxl << endl;
						}
						else
						{
							ms.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ms.name[j] != 0)
									fout << char(ms.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << ms.price * size_qty << endl <<
								"Price with tax: $" << (ms.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ms.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (ms.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ms.qty_xl << endl;
						}
						else
						{
							ms.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ms.name[j] != 0)
									fout << char(ms.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << ms.price * size_qty << endl <<
								"Price with tax: $" << (ms.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ms.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (ms.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ms.qty_l << endl;
						}
						else
						{
							ms.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ms.name[j] != 0)
									fout << char(ms.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << ms.price * size_qty << endl <<
								"Price with tax: $" << (ms.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ms.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (ms.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ms.qty_m << endl;
						}
						else
						{
							ms.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ms.name[j] != 0)
									fout << char(ms.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << ms.price * size_qty << endl <<
								"Price with tax: $" << (ms.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ms.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (ms.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ms.qty_s << endl;
						}
						else
						{
							ms.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ms.name[j] != 0)
									fout << char(ms.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << ms.price * size_qty << endl <<
								"Price with tax: $" << (ms.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ms.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (ms.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ms.qty_xs << endl;
						}
						else
						{
							ms.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ms.name[j] != 0)
									fout << char(ms.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << ms.price * size_qty << endl <<
								"Price with tax: $" << (ms.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ms.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(ms)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&ms, sizeof(ms));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 4:
		wshirt ws;

		while (n)
		{
			inventory_file.open("Women_shirt.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&ws, sizeof(ws)))
			{
				ws.print();
			}

			inventory_file.close();


			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Women_shirt.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&ws, sizeof(ws)))
			{

				if (item_id == ws.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (ws.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ws.qty_xxl << endl;
						}
						else
						{
							ws.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ws.name[j] != 0)
									fout << char(ws.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << ws.price * size_qty << endl <<
								"Price with tax: $" << (ws.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ws.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (ws.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ws.qty_xl << endl;
						}
						else
						{
							ws.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ws.name[j] != 0)
									fout << char(ws.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << ws.price * size_qty << endl <<
								"Price with tax: $" << (ws.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ws.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (ws.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ws.qty_l << endl;
						}
						else
						{
							ws.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ws.name[j] != 0)
									fout << char(ws.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << ws.price * size_qty << endl <<
								"Price with tax: $" << (ws.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ws.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (ws.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ws.qty_m << endl;
						}
						else
						{
							ws.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ws.name[j] != 0)
									fout << char(ws.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << ws.price * size_qty << endl <<
								"Price with tax: $" << (ws.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ws.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (ws.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ws.qty_s << endl;
						}
						else
						{
							ws.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ws.name[j] != 0)
									fout << char(ws.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << ws.price * size_qty << endl <<
								"Price with tax: $" << (ws.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ws.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (ws.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << ws.qty_xs << endl;
						}
						else
						{
							ws.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (ws.name[j] != 0)
									fout << char(ws.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << ws.price * size_qty << endl <<
								"Price with tax: $" << (ws.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (ws.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(ws)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&ws, sizeof(ws));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 5:
		mpants mp;

		while (n)
		{
			inventory_file.open("Men_pants.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&mp, sizeof(mp)))
			{
				mp.print();
			}

			inventory_file.close();



			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Men_pants.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&mp, sizeof(mp)))
			{

				if (item_id == mp.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (mp.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mp.qty_xxl << endl;
						}
						else
						{
							mp.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mp.name[j] != 0)
									fout << char(mp.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << mp.price * size_qty << endl <<
								"Price with tax: $" << (mp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mp.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (mp.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mp.qty_xl << endl;
						}
						else
						{
							mp.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mp.name[j] != 0)
									fout << char(mp.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << mp.price * size_qty << endl <<
								"Price with tax: $" << (mp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (mp.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mp.qty_l << endl;
						}
						else
						{
							mp.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mp.name[j] != 0)
									fout << char(mp.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << mp.price * size_qty << endl <<
								"Price with tax: $" << (mp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (mp.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mp.qty_m << endl;
						}
						else
						{
							mp.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mp.name[j] != 0)
									fout << char(mp.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << mp.price * size_qty << endl <<
								"Price with tax: $" << (mp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (mp.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mp.qty_s << endl;
						}
						else
						{
							mp.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mp.name[j] != 0)
									fout << char(mp.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << mp.price * size_qty << endl <<
								"Price with tax: $" << (mp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (mp.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mp.qty_xs << endl;
						}
						else
						{
							mp.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mp.name[j] != 0)
									fout << char(mp.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << mp.price * size_qty << endl <<
								"Price with tax: $" << (mp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mp.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(mp)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&mp, sizeof(mp));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 6:
		wpants wp;

		while (n)
		{
			inventory_file.open("Women_pants.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&wp, sizeof(wp)))
			{
				wp.print();
			}

			inventory_file.close();


			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Women_pants.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&wp, sizeof(wp)))
			{

				if (item_id == wp.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (wp.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wp.qty_xxl << endl;
						}
						else
						{
							wp.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wp.name[j] != 0)
									fout << char(wp.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << wp.price * size_qty << endl <<
								"Price with tax: $" << (wp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wp.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (wp.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wp.qty_xl << endl;
						}
						else
						{
							wp.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wp.name[j] != 0)
									fout << char(wp.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wp.price * size_qty << endl <<
								"Price with tax: $" << (wp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (wp.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wp.qty_l << endl;
						}
						else
						{
							wp.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wp.name[j] != 0)
									fout << char(wp.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << wp.price * size_qty << endl <<
								"Price with tax: $" << (wp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (wp.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wp.qty_m << endl;
						}
						else
						{
							wp.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wp.name[j] != 0)
									fout << char(wp.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << wp.price * size_qty << endl <<
								"Price with tax: $" << (wp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (wp.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wp.qty_s << endl;
						}
						else
						{
							wp.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wp.name[j] != 0)
									fout << char(wp.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << wp.price * size_qty << endl <<
								"Price with tax: $" << (wp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wp.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (wp.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wp.qty_xs << endl;
						}
						else
						{
							wp.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wp.name[j] != 0)
									fout << char(wp.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << wp.price * size_qty << endl <<
								"Price with tax: $" << (wp.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wp.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(wp)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&wp, sizeof(wp));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 7:
		munderwear mu;

		while (n)
		{
			inventory_file.open("Men_underwear.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&mu, sizeof(mu)))
			{
				mu.print();
			}

			inventory_file.close();


			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Men_underwear.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&mu, sizeof(mu)))
			{

				if (item_id == mu.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (mu.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mu.qty_xxl << endl;
						}
						else
						{
							mu.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mu.name[j] != 0)
									fout << char(mu.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << mu.price * size_qty << endl <<
								"Price with tax: $" << (mu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mu.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (mu.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mu.qty_xl << endl;
						}
						else
						{
							mu.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mu.name[j] != 0)
									fout << char(mu.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << mu.price * size_qty << endl <<
								"Price with tax: $" << (mu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (mu.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mu.qty_l << endl;
						}
						else
						{
							mu.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mu.name[j] != 0)
									fout << char(mu.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << mu.price * size_qty << endl <<
								"Price with tax: $" << (mu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (mu.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mu.qty_m << endl;
						}
						else
						{
							mu.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mu.name[j] != 0)
									fout << char(mu.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << mu.price * size_qty << endl <<
								"Price with tax: $" << (mu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (mu.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mu.qty_s << endl;
						}
						else
						{
							mu.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mu.name[j] != 0)
									fout << char(mu.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << mu.price * size_qty << endl <<
								"Price with tax: $" << (mu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (mu.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << mu.qty_xs << endl;
						}
						else
						{
							mu.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (mu.name[j] != 0)
									fout << char(mu.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << mu.price * size_qty << endl <<
								"Price with tax: $" << (mu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (mu.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(mu)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&mu, sizeof(mu));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;

	case 8:
		wunderwear wu;

		while (n)
		{
			inventory_file.open("Women_underwear.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&wu, sizeof(wu)))
			{
				wu.print();
			}

			inventory_file.close();

			cout << endl << endl << "What item do you want to purchase, enter item ID" << endl;
			cin >> item_id;
			cout << endl;

			print_size();
			cin >> size_cho;
			cin >> size_qty;

			print_color();
			cin >> color_cho;

			inventory_file.open("Men_hoodies.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&wu, sizeof(wu)))
			{

				if (item_id == wu.id)
				{
					sw = 1;

					if (size_cho == 1)
					{
						if (wu.qty_xxl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wu.qty_xxl << endl;
						}
						else
						{
							wu.qty_xxl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wu.name[j] != 0)
									fout << char(wu.name[j]);
								else
									break;

							}
							fout << endl << "XXL: " << size_qty << endl << "Price Without tax: $" << wu.price * size_qty << endl <<
								"Price with tax: $" << (wu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wu.price * size_qty) * 1.065;
						}

					}
					else if (size_cho == 2)
					{
						if (wu.qty_xl < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wu.qty_xl << endl;
						}
						else
						{
							wu.qty_xl -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wu.name[j] != 0)
									fout << char(wu.name[j]);
								else
									break;

							}
							fout << endl << "XL: " << size_qty << endl << "Price Without tax: $" << wu.price * size_qty << endl <<
								"Price with tax: $" << (wu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 3)
					{
						if (wu.qty_l < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wu.qty_l << endl;
						}
						else
						{
							wu.qty_l -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wu.name[j] != 0)
									fout << char(wu.name[j]);
								else
									break;

							}
							fout << endl << "L: " << size_qty << endl << "Price Without tax: $" << wu.price * size_qty << endl <<
								"Price with tax: $" << (wu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 4)
					{
						if (wu.qty_m < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wu.qty_m << endl;
						}
						else
						{
							wu.qty_m -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wu.name[j] != 0)
									fout << char(wu.name[j]);
								else
									break;

							}
							fout << endl << "M: " << size_qty << endl << "Price Without tax: $" << wu.price * size_qty << endl <<
								"Price with tax: $" << (wu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 5)
					{
						if (wu.qty_s < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wu.qty_s << endl;
						}
						else
						{
							wu.qty_s -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wu.name[j] != 0)
									fout << char(wu.name[j]);
								else
									break;

							}
							fout << endl << "S: " << size_qty << endl << "Price Without tax: $" << wu.price * size_qty << endl <<
								"Price with tax: $" << (wu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wu.price * size_qty) * 1.065;
						}
					}
					else if (size_cho == 6)
					{
						if (wu.qty_xs < size_qty)
						{
							cout << "Not enough in stock!" << endl;
							cout << "Curent stock is: " << wu.qty_xs << endl;
						}
						else
						{
							wu.qty_xs -= size_qty;

							fout.open("receipt.txt", ios::app);
							fout << endl;
							fout << Color[color_cho - 1] << " ";
							for (int j = 0; j < 100; j++)
							{
								if (wu.name[j] != 0)
									fout << char(wu.name[j]);
								else
									break;

							}
							fout << endl << "XS: " << size_qty << endl << "Price Without tax: $" << wu.price * size_qty << endl <<
								"Price with tax: $" << (wu.price * size_qty) * 1.065 << endl;

							fout.close();

							total += (wu.price * size_qty) * 1.065;

						}
					}




					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(wu)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&wu, sizeof(wu));

					break;
				}


			}

			inventory_file.close();

			if (sw == 0)
				cout << "Item not found" << endl;


			cout << "Do you want to purchase another item from this invenotry? (1 = YES, 0 = NO)" << endl;
			cin >> n;

		}

		break;


	case 9:
		logSwitch = false;
		break;


	}

}


void editInventory()
{
	string name;
	int cho;
	bool logSwitch = true;
	fstream inventory_file;
	int item_id;
	int n = 0;
	

	while (logSwitch)
	{
		cout << endl << endl;

		cout << "1. Mens Hoodies" << endl;
		cout << "2. Womens Hoodies" << endl;
		cout << "3. Mens Tshirts" << endl;
		cout << "4. Womens Tshirts" << endl;
		cout << "5. Mens Pants" << endl;
		cout << "6. Womens Pants" << endl;
		cout << "7. Mens Underwear" << endl;
		cout << "8. Womens Underwear" << endl;
		cout << "9. Exit" << endl;
		cout << "What inventory do you want to edit? " << endl;
		cin >> cho;

		switch (cho)
		{
		case 1:
			mhoodie mh;

			inventory_file.open("Men_hoodies.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&mh, sizeof(mh)))
			{
				mh.print();

			}

			inventory_file.close();
			
			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;		
		

			inventory_file.open("Men_hoodies.dat", ios::in | ios::out | ios::binary);
			

			while (inventory_file.read((char*)&mh, sizeof(mh)))
			{

				if (item_id == mh.id)
				{
					n = 1;
        
					cout << "Enter new price: ";
					cin >> mh.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						mh.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> mh.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> mh.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> mh.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> mh.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> mh.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> mh.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(mh)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&mh, sizeof(mh));

					break;
				}
				
				
			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;

			
			break;

		case 2:
			whoodie wh;

			inventory_file.open("Women_hoodies.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&wh, sizeof(wh)))
			{
				wh.print();

			}

			inventory_file.close();

			

			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Women_hoodies.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&wh, sizeof(wh)))
			{
				
				if (item_id == wh.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> wh.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						wh.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> wh.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> wh.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> wh.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> wh.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> wh.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> wh.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(wh)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&wh, sizeof(wh));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;

		case 3:
			mshirt ms;

			inventory_file.open("Men_shirt.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&ms, sizeof(ms)))
			{
				ms.print();
			}

			inventory_file.close();

			

			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Men_shirt.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&ms, sizeof(ms)))
			{

				if (item_id == ms.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> ms.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						ms.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> ms.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> ms.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> ms.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> ms.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> ms.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> ms.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(ms)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&ms, sizeof(ms));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;

		case 4:
			wshirt ws;

			inventory_file.open("Women_shirt.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&ws, sizeof(ws)))
			{
				ws.print();
			}

			inventory_file.close();
						

			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Woman_shirt.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&ws, sizeof(ws)))
			{

				if (item_id == ws.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> ws.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						ws.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> ws.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> ws.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> ws.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> ws.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> ws.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> ws.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(ws)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&ws, sizeof(ws));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;

		case 5:
			mpants mp;

			inventory_file.open("Men_pants.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&mp, sizeof(mp)))
			{
				mp.print();
			}

			inventory_file.close();
			

			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Men_pants.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&mp, sizeof(mp)))
			{

				if (item_id == mp.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> mp.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						mp.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> mp.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> mp.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> mp.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> mp.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> mp.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> mp.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(mp)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&mp, sizeof(mp));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;

		case 6:
			wpants wp;

			inventory_file.open("Women_pants.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&wp, sizeof(wp)))
			{
				wp.print();
			}

			inventory_file.close();			

			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Women_pants.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&wp, sizeof(wp)))
			{

				if (item_id == wp.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> wp.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						wp.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> wp.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> wp.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> wp.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> wp.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> wp.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> wp.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(wp)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&wp, sizeof(wp));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;

		case 7:
			munderwear mu;

			inventory_file.open("Men_underwear.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&mu, sizeof(mu)))
			{
				mu.print();
			}

			inventory_file.close();


			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Men_underwear.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&mu, sizeof(mu)))
			{

				if (item_id == mu.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> mu.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						mu.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> mu.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> mu.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> mu.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> mu.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> mu.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> mu.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(mu)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&mu, sizeof(mu));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;

		case 8:
			wunderwear wu;

			inventory_file.open("Women_underwear.dat", ios::in | ios::binary);

			while (inventory_file.read((char*)&wu, sizeof(wu)))
			{
				wu.print();
			}

			inventory_file.close();


			cout << endl << endl << "What item do you want to edit (ENTER THE ITEM ID)" << endl;
			cin >> item_id;

			inventory_file.open("Women_underwear.dat", ios::in | ios::out | ios::binary);


			while (inventory_file.read((char*)&wu, sizeof(wu)))
			{

				if (item_id == wu.id)
				{
					n = 1;

					cout << "Enter new price: ";
					cin >> wu.price;
					cin.ignore();

					cout << "Enter new name: ";
					getline(cin, name);
					decConversion(name);
					for (int x = 0; x < 100; x++)
					{
						wu.name[x] = decArray[x];
					}

					cout << "Enter the new XXL QTY" << endl;
					cin >> wu.qty_xxl;

					cout << "Enter the new XL QTY" << endl;
					cin >> wu.qty_xl;

					cout << "Enter the new L QTY" << endl;
					cin >> wu.qty_l;

					cout << "Enter the new M QTY" << endl;
					cin >> wu.qty_m;

					cout << "Enter the new S QTY" << endl;
					cin >> wu.qty_s;

					cout << "Enter the new XS QTY" << endl;
					cin >> wu.qty_xs;


					// Move the file pointer back to the beginning of the record
					inventory_file.seekp(-static_cast<int>(sizeof(wu)), ios::cur);

					// Write the modified record back to the file
					inventory_file.write((char*)&wu, sizeof(wu));

					break;
				}


			}

			inventory_file.close();

			if (n == 0)
				cout << "Item not found" << endl;


			break;


		case 9:
			logSwitch = false;
			break;
		}

		

		

	}

}


int UserLogin()
{
	string username;
	int password;


	cout << "Enter your Username: ";
	cin >> username;
	cout << "Enter your Password: ";
	cin >> password;

	return password;

}


int main()
{
	int cho;

	//deletes the reciept file on startup
	remove("receipt.txt");
	
	//checks if the files exist and if they don't it creates them
	ifstream inventory;

	inventory.open("Men_hoodies.dat");

	if (!inventory)
		load_inventory();


	while (1)
	{
		system("CLS");
		char hold;

		logo();
		cout << "Klei Nagode, Alitza Espinoza" << endl << endl;
		cout << endl << "1. Edit Inventory ";
		cout << endl << "2. Purchase Items ";
		cout << endl << "3. Print Receipt ";
		cout << endl << "4. Print Inventory";
		cout << endl << "5. Clear the Receipt";
		cout << endl << "6. Clear the console ";
		cout << endl << "7. Exit the Program ";
		cout << endl << endl << "Enter Your Choice ";
		cin >> cho;
		
		int password;
		int sudopassword = 12345;


		if (cho == 1)
		{
			system("CLS");
			password = UserLogin();

			if (password == sudopassword)
			{
				editInventory();
			}
			else
			{
				cout << endl << ">>Password Incorrect<< " << endl;
				cout << "Press any key to continue... " << endl;
				cin >> hold;
				continue;
			}

		}

		else if (cho == 2)
		{
			system("CLS");
			purchase();
		}
		else if (cho == 3)
		{
			receipt();
		}
		else if (cho == 4)
			print_inventory();
		else if (cho == 5)
		{
			remove("receipt.txt");
			total = 0;
		}	
		else if (cho == 6)
			system("CLS");
		else if (cho == 7)
			break;
		else
		{
			cout <<endl<<endl<< ">>Invalid choice<<"<<endl<<endl;
			continue;
		}


	}

	return 0;
}

