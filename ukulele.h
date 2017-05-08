//declaring Material class
class Material {

private:

    int material_ID;
    float price;
    string name;
    float acoustic_absorption;
    float elasticity;
    float reflectivity;

public:

    Material();
    Material(int, float, string, float, float, float);

    int getMaterial_ID();
    float getPrice();
    string getName();
    float getAcoustic_absorption();
    float getElasticity();
    float getReflectivity();

    Material& operator =(const Material&);
    Material& operator =(const int&);

};

//declaring UkuleleBody class
class UkuleleBody {

private:

    int body_ID;
    float price;
    Material material;

public:

    UkuleleBody();
    UkuleleBody(int, float, Material);

    int getBody_ID();
    float getPrice();
    Material getMaterial();

    UkuleleBody& operator =(const UkuleleBody&);
    UkuleleBody& operator =(const int&);
};

//declaring Fret class
class Fret {

private:

    int fret_ID;
    float price;
    Material material;

public:
    Fret();
    Fret(int, float, Material);

    int getFret_ID();
    float getPrice();
    Material getMaterial();

    Fret& operator =(const Fret&);
    Fret& operator =(const int&);
};

//declaring Fretboard class
class Fretboard {

private:

    int fretboard_ID;
    float price;
    Fret frets;
    Material material;

public:

    Fretboard();
    Fretboard(int, float, Fret, Material);

    int getFretboard_ID();
    float getPrice();
    Material getMaterial();
    Fret getFrets();

    Fretboard& operator =(const Fretboard&);
    Fretboard& operator =(const int&);
};

//declaring TuningHead class
class TuningHead {

private:

    int head_ID;
    float price;
    Material material;

public:

    TuningHead();
    TuningHead(int, float, Material);

    int getHead_ID();
    float getPrice();
    Material getMaterial();

    TuningHead& operator =(const TuningHead&);
    TuningHead& operator =(const int&);
};

//declaring UkuleleString class
class UkuleleString {

private:

    int string_ID;
    float price;
    Material material;

public:

    UkuleleString();
    UkuleleString(int, float, Material);

    int getString_ID();
    float getPrice();
    Material getMaterial();

    UkuleleString& operator =(const UkuleleString&);
    UkuleleString& operator =(const int&);
};

//declaring Bridge class
class Bridge {

private:

    int bridge_ID;
    float price;
    Material material;

public:

    Bridge();
    Bridge(int, float, Material);

    int getBridge_ID();
    float getPrice();
    Material getMaterial();

    Bridge& operator =(const Bridge&);
    Bridge& operator =(const int&);
};

//declaring Saddle class
class Saddle {

private:

    int saddle_ID;
    float price;
    Material material;

public:

    Saddle();
    Saddle(int, float, Material);

    int getSaddle_ID();
    float getPrice();
    Material getMaterial();

    Saddle& operator =(const Saddle&);
    Saddle& operator =(const int&);
};

//declaring UkuleleType class
class UkuleleType {

private:

    string name;
    float ukulele_length;
    float scale_length;
    int number_frets;
    string range;
    string common_tuning;
    string alternate_tuning;

public:

    UkuleleType();
    UkuleleType(string, float, float, int, string, string, string);

    string getName();
    float getUkulele_length();
    float getScale_length();
    int getNumber_frets();
    string getRange();
    string getCommon_tuning();
    string getAlternate_tuning();

    UkuleleType& operator =(const UkuleleType&);
    UkuleleType& operator =(const int&);
};

//declaring Ukulele class
class Ukulele {

private:

    int ukulele_ID;
    float price;
    UkuleleType type;
    UkuleleBody body;
    Fretboard fretboard;
    TuningHead tuning_head;
    UkuleleString ukulele_string;
    Bridge bridge;
    Saddle saddle;


public:

    Ukulele();
    Ukulele(int, float, UkuleleType, UkuleleBody, Fretboard, TuningHead, UkuleleString, Bridge, Saddle);

    int getUkulele_ID();
    float getPrice();
    UkuleleType getUkuleleType();
    UkuleleBody getUkuleleBody();
    Fretboard getFretboard();
    TuningHead getTuningHead();
    UkuleleString getString();
    Bridge getBridge();
    Saddle getSaddle();

    Ukulele& operator =(const Ukulele&);
    Ukulele& operator =(const int&);
};

//declaring supplier class
class  Supplier{

private:

    int supplier_ID;
    string supplier_name;
    Material supplied_material;

public:

    Supplier();
    Supplier(int, string, Material);

    int getSupplier_ID();
    string getSupplier_name();
    Material getSupplied_Material();

    Supplier& operator =(const Supplier&);
    Supplier& operator =(const int&);
};

class Manager{

private:

    int manager_ID;
    string name;
    float salary;

public:

    Manager();
    Manager(int, string, float);
    int getManager_ID();
    string getName();
    float getSalary();

    Manager& operator =(const Manager&);
    Manager& operator =(const int&);
};

class Employee{

private:

    int employee_ID;
    string name;
    float salary;
    string qualification;

public:

    Employee();
    Employee(int, string, float, string);
    int getEmployee_ID();
    string getName();
    float getSalary();
    string getQualification();

    Employee& operator =(const Employee&);
    Employee& operator =(const int&);
};

//declaring production class
class ProductionFactory {

private:

    int factory_ID;
    string address;
    string contacts;
    Manager manager;

public:

   ProductionFactory();
   ProductionFactory(int, string, string, Manager);
   int getFactory_ID();
   string getAddress();
   string getContacts();
   Manager getManager();

   ProductionFactory& operator =(const ProductionFactory&);
   ProductionFactory& operator =(const int&);
};

class WoodFactory: public ProductionFactory{

private:
    Manager wood_factory_manager;
    Employee employee;
    UkuleleBody body;
    Fretboard fretboard;
    Bridge bridge;
    Saddle saddle;

public:

    void setManager(Manager);

    Manager getManager();

    void ukuleleBodyProduction(Employee, UkuleleBody);//every employee is responsible for the production of a single part

    void fretboardProduction(Employee, Fretboard);

    void bridgeProduction(Employee, Bridge);

    void saddleProduction(Employee, Saddle);

    WoodFactory& operator =(const WoodFactory&);
    WoodFactory& operator =(const int&);
};

class MetalFactory: public ProductionFactory{

private:
    Manager metal_factory_manager;
    Employee employee;
    TuningHead head;
    UkuleleString str;
    Bridge bridge;
    Saddle saddle;

public:

    void setManager(Manager);

    Manager getManager();

    void tuningHeadProduction(Employee, TuningHead); //every employee is responsible for the production of a single part

    void ukuleleStringProduction(Employee, UkuleleString);

    void bridgeProduction(Employee, Bridge);//the saddle and the bridge can be made either of wood or of metal

    void saddleProduction(Employee, Saddle);

    MetalFactory& operator =(const MetalFactory&);
    MetalFactory& operator =(const int&);
};

class ManagementCockpit {

private:
    Supplier supplier1, supplier2;
    Ukulele ukulele;
    MetalFactory metal_f;
    WoodFactory wood_f;

public:

    ManagementCockpit();

    void ukulele_request(Supplier, Supplier, Ukulele, MetalFactory, WoodFactory);

    Supplier getSupplier1();
    Supplier getSupplier2();
    Ukulele getUkulele();
    MetalFactory getMetalFactory();
    WoodFactory getWoodFactory();

    void print_output();

};









