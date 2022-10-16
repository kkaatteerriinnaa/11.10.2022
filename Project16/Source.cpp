#include <iostream>
using namespace std;

class HDD
{
	string name;
	string size;
public:
	HDD()
	{
		name = "name";
		size = "size TB";
	}
	HDD(const char* n, const char* s)
	{
		name = n;
		size = s;
		size += " TB";
	}
	void Show()
	{
		cout << name << "\nSize: " << size << endl;
	}
};

class RAM
{
	string name;
	string size;
public:
	RAM()
	{
		name = "name";
		size = "size GB";
	}
	RAM(const char* n, const char* s)
	{
		name = n;
		size = s;
		size += " GB";
	}
	void Show()
	{
		cout << name << "\nSize: " << size << endl;
	}
};

class Printer
{
	string name;
public:
	Printer()
	{
		name = "name";
	}
	Printer(const char* n)
	{
		name = n;
	}
	void Show()
	{
		cout << name << endl;
	}
};

class CPU
{
	string name;
	string speed;
public:
	CPU()
	{
		name = "name";
		speed = "speed Ghz";
	}
	CPU(const char* n, const char* s)
	{
		name = n;
		speed = s;
		speed += " GHz";
	}
	void Show()
	{
		cout << name << "\nSpeed: " << speed << endl;
	}
};

class GPU
{
	string name;
	string size;
public:
	GPU()
	{
		name = "name";
		size = "size GB";
	}
	GPU(const char* n, const char* s)
	{
		name = n;
		size = s;
		size += " GB";
	}
	void Show()
	{
		cout << name << "\nSize: " << size << endl;
	}
};

class Keyboard
{
	string name;
public:
	Keyboard()
	{
		name = "name";
	}
	Keyboard(const char* n)
	{
		name = n;
	}
	void Show()
	{
		cout << name << endl;
	}
};

class Laptop
{
	RAM* ram;
	Printer* printer;
	HDD* hdd;
	Keyboard keyboard;
	CPU cpu;
	GPU gpu;
	string name;
	int year;
public:
	Laptop(RAM* r, Printer* p, HDD* h, Keyboard k, CPU c, GPU g, const char* n, int y) :ram(r), printer(p), hdd(h), keyboard(k), cpu(c), gpu(g)
	{
		name = n;
		year = y;
	}
	void Show()
	{
		cout << "Laptop\nName: " << name << endl;
		cout << "Year: " << year << endl;
		cout << "CPU: ";
		cpu.Show();
		cout << "RAM: ";
		ram->Show();
		cout << "HDD: ";
		hdd->Show();
		cout << "GPU: ";
		gpu.Show();
		cout << "Keyboard: ";
		keyboard.Show();
		cout << "Printer: ";
		printer->Show();
	}
	~Laptop()
	{
		cout << "DESTRUCT\n";
	}
};

int main()
{
	HDD h("Silicon Power", "2");
	RAM r("Kingstone", "16");
	CPU c("Intel Core I7", "3.7");
	GPU g("NVidia RTX 4090 TI", "24");
	Keyboard k("HyperX");
	Printer p("HP");
	Laptop obj(&r, &p, &h, k, c, g, "Acer", 2023);
	obj.Show();
}