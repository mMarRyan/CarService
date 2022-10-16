#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <Windows.h>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <functional>
using namespace std;

class Car{
   private:
       int m_id;
       string m_brand;
       string m_model;
       float m_engineCapacity;
       string m_typeOfFuel;
       string m_transmission;

   public:

        Car(int id, string brand, string model, float engineCapacity, string typeOfFuel, string transmission):
            m_id(id), m_brand(brand), m_model(model), m_engineCapacity(engineCapacity), m_typeOfFuel(typeOfFuel), m_transmission(transmission)
            {

            }

       int getId(){ return m_id; }
       string getBrand(){ return m_brand; }
       string getModel(){ return m_model; }
       float getEngineCapacity(){ return m_engineCapacity; }
       string getTypeOfFuel() { return m_typeOfFuel; }
       string getTransmision() { return m_transmission; }

       void printHeader(){
        string hed = "��������˲";
        int padding = round(83 / 2) - round(hed.length()/2);
        cout << string(padding, ' ') << hed << endl;
        cout << left << "| " << setw(2) << "�" ;
        cout << " | " << setw(10) << "�����" ;
        cout << " | " << setw(11) << "������" ;
        cout << " | " << setw(12) << "��'�� �������" ;
        cout << " | " << setw(11) << "��� ������" ;
        cout << " | " << setw(11)  << "���" << " |" << endl;
       }

        void print(){
        cout << left << "| " << setw(2) << m_id;
        cout << " | " << setw(10) << m_brand;
        cout << " | " << setw(11) << m_model;
        cout << " | " << setw(13) << m_engineCapacity;
        cout << " | " << setw(11) << m_typeOfFuel;
        cout << " | " << setw(11)  <<  m_transmission << " |" << endl;
       }
};

class Person{
    protected:
        string m_fullName;
        string m_phone;
        Person(string name, string phone):
            m_fullName(name), m_phone(phone)
        {

        }
    public:

        string getFullName(){ return m_fullName; }
        string getPhone(){ return m_phone; }


};

class CarMechanic: public Person{
    private:
        int m_id;
        string m_typeOfActivity;
        int m_salary;
    public:
        CarMechanic(int id, string fullName, string typeOfActivity, string phone, int salary):
            Person(fullName, phone), m_id(id), m_typeOfActivity(typeOfActivity), m_salary(salary)
        {

        }

        string getTypeOfActivity(){ return m_typeOfActivity; }
        int getSalary(){ return m_salary; }
        int getId(){return m_id; }

        void printHeader(){
        string hed = "�������";
        int padding = round(83 / 2) - round(hed.length()/2);
        cout << string(padding, ' ') << hed << endl;
        cout << left << "| " << setw(2) << "�" ;
        cout << " | " << setw(32) << "ϲ�" ;
        cout << " | " << setw(14) <<"��� ��������" ;
        cout << " | " << setw(9) << "��������" ;
        cout << " | " << setw(10) << "�������" << " |" << endl;
        }
        void print(){

        cout  << left << "| " << setw(2) << m_id  << " | " << setw(32) << m_fullName << " | " ;
        cout << setw(14) << m_typeOfActivity << setw(8) << " | " << m_salary << " | " << m_phone  << " |" << endl;
        }
};

class Client: public Person{
    private:
        int m_id;
        string m_car;
        int m_yearOfProduction;
        string m_adress;

    public:
        Client(int id, string fullName, string car, double yearOfProduction, string phone, string adress):
            Person(fullName, phone), m_id(id), m_car(car), m_yearOfProduction(yearOfProduction), m_adress(adress)
        {

        }
        int getId(){return m_id; }
        string getAdress(){ return m_adress; }
        string getCar(){ return m_car; }
        int getYearOfProduction(){ return m_yearOfProduction; }

        void printHeader(){

        string hed = "�˲����";
        int padding = round(157 / 2) - round(hed.length()/2);
        cout << string(padding, ' ') << hed << endl;
        cout << left << "| " << setw(2) << "�" ;
        cout << " | " << setw(33) << "ϲ�" ;
        cout << " | " << setw(11) << "���������" ;
        cout << " | " << setw(11) << "г� �������" ;
        cout << " | " << setw(10) << "�������" ;
        cout << " | " << setw(71) << "������" << " |" << endl;
        }

        void print(){
        cout << left << "| " << setw(2) << m_id;
        cout << " | " << setw(33) << m_fullName;
        cout << " | " << setw(11) << m_car;
        cout << " | " << setw(11) << m_yearOfProduction;
        cout << " | " << setw(10) << m_phone;
        cout << " | " << setw(71) << m_adress << " |" << endl;
        }
};

class Repair{
    private:
        int m_id;
        string m_model;
        string m_typeOfFailure;
        int m_repairPrice;
        string m_carMechanic;

    public:

        Repair(int id,string model, string typeOfFailure, int repairPrice, string carMechanic):
            m_id(id), m_model(model), m_typeOfFailure(typeOfFailure), m_repairPrice(repairPrice), m_carMechanic(carMechanic)
            {

            }
        int getId(){return m_id; }
        string getModel(){ return m_model;}
        string getTypeOfFailure() { return m_typeOfFailure;}
        int  getRepairPrice() { return m_repairPrice;}
        string getCarMechanic() { return m_carMechanic;}

        void printHeader(){
        string hed = "������";
        int padding = round(86 / 2) - round(hed.length()/2);
        cout << string(padding, ' ') << hed << endl;
        cout << left << "| " << setw(3) << "�" ;
        cout << " | " << setw(11) << "������" ;
        cout << " | " << setw(12) << "��� �������" ;
        cout << " | " << setw(12) << "ֳ�� �������" ;
        cout << " | " << setw(32) << "�������" << " |" << endl;
        }
        void print(){
        cout << left << "| " << setw(3) << m_id;
        cout << " | " << setw(11) << m_model;
        cout << " | " << setw(12) << m_typeOfFailure;
        cout << " | " << setw(12) << m_repairPrice;
        cout << " | " << setw(32) << m_carMechanic << " |" << endl;
         }
};

class Storage{

    public:

        vector <Client> clients;
        vector <CarMechanic> carMechanics;
        vector <Car> cars;
        vector <Repair> repairs;

};
Storage storage;

float readAsFloat(istringstream &iss, const char separator){
string temp;
getline(iss, temp, separator);
return stof(temp);
}
int readAsInt(istringstream &iss, const char separator){
string temp;
getline(iss, temp, separator);
return stoi(temp);
}
string readAsString(istringstream &iss, const char separator){
string temp;
getline(iss, temp, separator);
return temp;
}

void readCar(){
    ifstream fin;
    fin.open("Car.txt");
     if(fin.is_open()){
        string record;
            while(getline(fin, record)){
                istringstream iss(record);
                int id = readAsInt(iss,';');
                string brand = readAsString(iss,';');
                string model = readAsString(iss,';');
                float engineCapacity = readAsFloat(iss,';');
                string typeOfFuel = readAsString(iss,';');
                string transmission = readAsString(iss,';');
                storage.cars.push_back(Car(id, brand, model, engineCapacity, typeOfFuel, transmission));
            }
            fin.close();
        }
}
void printTable(vector <Car> &table){
    table[0].printHeader();
    for(size_t i = 0; i < table.size(); i++){
            table[i].print();
    }
}

void readCarMechanic(){
    ifstream fin;
    fin.open("CarMechanic.txt");
    if(fin.is_open()){
        string record;
            while(getline(fin, record)){
            istringstream iss(record);
                int id = readAsInt(iss,';');
                string fullName = readAsString(iss,';');
                string typeOfActivity = readAsString(iss,';');
                string phone = readAsString(iss,';');
                int salary = readAsInt(iss,';');
                storage.carMechanics.push_back(CarMechanic(id, fullName, typeOfActivity, phone, salary));
            }
            fin.close();
        }
}
void printTable(vector <CarMechanic> &table){
     table[0].printHeader();
     for(size_t i = 0; i < table.size(); i++){
            table[i].print();
    }
}

void readClient(){
    ifstream fin;
    fin.open("Client.txt");
    if(fin.is_open()){
        string record;
            while(getline(fin, record)){
                istringstream iss(record);
                int id = readAsInt(iss,';');
                string fullName = readAsString(iss,';');
                string car = readAsString(iss,';');
                int yearOfProduction = readAsInt(iss,';');
                string phone = readAsString(iss,';');
                string adress = readAsString(iss,';');
                storage.clients.push_back(Client(id, fullName, car, yearOfProduction, phone, adress));
            }
            fin.close();
    }
}
void printTable( vector <Client> &table){
    table[0].printHeader();
    for(size_t i = 0; i < table.size(); i++){
            table[i].print();
        }
}

void readRepair(){
    ifstream fin;
    fin.open("Repair.txt");
    if(fin.is_open()){
        string record;
            while(getline(fin, record)){
                istringstream iss(record);
                 int id = readAsInt(iss,';');
                 string model = readAsString(iss,';');
                 string typeOfFailure = readAsString(iss,';');
                 int repairPrice = readAsInt(iss,';');
                 string carMechanic = readAsString(iss,';');
                 storage.repairs.push_back(Repair(id, model, typeOfFailure, repairPrice, carMechanic));
            }
            fin.close();
    }
}

void printTable(vector <Repair> &table){
    table[0].printHeader();
    for(size_t i = 0; i < table.size(); i++){
           table[i].print();
        }
}

void sortMastersBySalary(){
    vector <CarMechanic> sortTable = storage.carMechanics;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getSalary() > sortTable[smallestIndex].getSalary())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void sortClienrsByName(){
    vector <Client> sortTable = storage.clients;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getFullName() < sortTable[smallestIndex].getFullName())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void sortClienrsByCar(){
    vector <Client> sortTable = storage.clients;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getCar() < sortTable[smallestIndex].getCar())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void sortClienrsByAdress(){
    vector <Client> sortTable = storage.clients;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getAdress() < sortTable[smallestIndex].getAdress())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void sortClienrsByPhone(){
    vector <Client> sortTable = storage.clients;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getPhone() < sortTable[smallestIndex].getPhone())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void sortClienrsByYearOfProduction(){
    vector <Client> sortTable = storage.clients;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getYearOfProduction() < sortTable[smallestIndex].getYearOfProduction())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void sortCarByModel(){
    vector <Car> sortTable = storage.cars;
    for (size_t startIndex = 0; startIndex < sortTable.size() - 1; ++startIndex){
    int smallestIndex = startIndex;
    for (size_t currentIndex = startIndex + 1; currentIndex < sortTable.size(); ++currentIndex){
      if (sortTable[currentIndex].getModel() < sortTable[smallestIndex].getModel())
        smallestIndex = currentIndex;
    }
    swap(sortTable[startIndex], sortTable[smallestIndex]);
  }
  printTable(sortTable);
}

void selectCarByFuel(){
    string typeFuel;
    cout << "������ ��� ������: '������' ��� '������': ";
    cin >> typeFuel;
    vector <Car> filterTable;
    for(size_t i = 0; i < storage.cars.size(); i++){
       if(storage.cars[i].getTypeOfFuel() == typeFuel){
        filterTable.push_back(storage.cars[i]);
       }
    }
  printTable(filterTable);
}

void selectCarByTransmission(){
    string typeTransmission;
    cout << "������ ��� ������: '�����������' ��� '��������': ";
    cin >> typeTransmission;
    vector <Car> filterTable;
    for(size_t i = 0; i < storage.cars.size(); i++){
       if(storage.cars[i].getTransmision() == typeTransmission){
        filterTable.push_back(storage.cars[i]);
       }
    }
  printTable(filterTable);
}

void selectCarByRepair(){
    string typeRepair;
    cout << "������ ��� �������:('������', '���', '���������', '�����', '����������', '��'): ";
    cin >> typeRepair;
    vector <Repair> filterTable;
    for(size_t i = 0; i < storage.repairs.size(); i++){
       if(storage.repairs[i].getTypeOfFailure() == typeRepair){
        filterTable.push_back(storage.repairs[i]);
       }
    }
  printTable(filterTable);
}

void selectRepairByPrice(){
    int price;
    cout << "������ �������� ���� �������:";
    cin >> price;
    vector <Repair> filterTable;
    for(size_t i = 0; i < storage.repairs.size(); i++){
       if(storage.repairs[i].getRepairPrice() >= price){
        filterTable.push_back(storage.repairs[i]);
       }
    }
  printTable(filterTable);
}

void selectClienrsByYearOfProduction(){
    int year;
    cout << "������ �� ����:";
    cin >> year;
    vector <Client> filterTable;
    for(size_t i = 0; i < storage.clients.size(); i++){
       if(storage.clients[i].getYearOfProduction() == year){
        filterTable.push_back(storage.clients[i]);
       }
    }
  printTable(filterTable);
}
void readAllTable(){
    readCar();
    readCarMechanic();
    readClient();
    readRepair();
}
int menu;
void Menu() {
    system("cls");
    cout << "������� ��:" << endl
        << "  0 - ����� � ��������" << endl
        << "  1 - ��� ��� �������� " << endl
        << "  2 - ��� ��� �������" << endl
        << "  3 - ��� ��� �볺���" << endl
        << "  4 - ��� ��� ������" << endl
        << "  5 - ����� 1: ���������� ������� �� ���������" << endl
        << "  6 - ����� 2: ���������� �볺��� �� ������" << endl
        << "  7 - ����� 3: ���������� �볺��� �� ����������" << endl
        << "  8 - ����� 4: ���������� �볺��� �� ����� ����������" << endl
        << "  9 - ����� 5: ���������� �볺��� �� ���������" << endl
        << " 10 - ����� 6: ���������� �볺��� �� ����� ������� ����" << endl
        << " 11 - ����� 7: ���������� �������" << endl
        << " 12 - ����� 8: ���� �� �������" << endl
        << " 13 - ����� 9: ���� �� ���" << endl
        << " 14 - ����� 10: ���� �� ��������" << endl
        << " 15 - ����� 11: ���� �� ����� �������" << endl
        << " 16 - ����� 12: ���� �� �볺��� ������ ����� ������� ����" << endl
        << "��� ����: ";
    cin >> menu;
}

int main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    readAllTable();

Menu();
while (menu != 0)
{
switch (menu)
{
case 1:
system("cls");

    printTable(storage.cars);
system("pause");
Menu();
break;
case 2:
system("cls");

    printTable(storage.carMechanics);
system("pause");
Menu();
break;
case 3:
system("cls");

    printTable(storage.clients);
system("pause");
Menu();

break;
case 4:
system("cls");

    printTable(storage.repairs);
system("pause");
Menu();
break;
case 5:
system("cls");
    sortMastersBySalary();
system("pause");
Menu();
break;
case 6:
system("cls");
    sortClienrsByName();
system("pause");
Menu();
break;
case 7:
system("cls");
    sortClienrsByCar();
system("pause");
Menu();
break;
case 8:
system("cls");
    sortClienrsByAdress();
system("pause");
Menu();
break;
case 9:
system("cls");
    sortClienrsByPhone();
system("pause");
Menu();
break;
case 10:
system("cls");
    sortClienrsByYearOfProduction();
system("pause");
Menu();
break;
case 11:
system("cls");
    sortCarByModel();
system("pause");
Menu();
break;
case 12:
system("cls");
    selectCarByFuel();
system("pause");
Menu();
break;
case 13:
system("cls");
    selectCarByTransmission();
system("pause");
Menu();
break;
case 14:
system("cls");
    selectCarByRepair();
system("pause");
Menu();
break;
case 15:
system("cls");
    selectRepairByPrice();
system("pause");
Menu();
break;
case 16:
system("cls");
    selectClienrsByYearOfProduction();
system("pause");
Menu();
break; }
}
system("cls");

cout << "������ ��������!" << endl;

    return 0;
}




