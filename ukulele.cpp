
#include <iostream>
#include <list>
#include <string>
using namespace std;
#include "ukulele.h"


//implementing Material constructors
Material::Material(){
    acoustic_absorption = 0;
    elasticity = 0;
    material_ID = 0;
    name = "";
    price = 0;
    reflectivity = 0;
}

Material::Material(int material_ID, float price, string name, float acoustic_absorption, float elasticity, float reflectivity){
    this->acoustic_absorption = acoustic_absorption;
    this->elasticity = elasticity;
    this->material_ID = material_ID;
    this->name = name;
    this->price = price;
    this->reflectivity = reflectivity;
}

//implementing Material getter methods

int Material::getMaterial_ID(){
    return material_ID;
}

float Material::getPrice(){
    return price;
}

string Material::getName(){
    return name;
}

float Material::getAcoustic_absorption(){
    return acoustic_absorption;
}

float Material::getElasticity(){
    return elasticity;
}

float Material::getReflectivity(){
    return reflectivity;
}

//implementing assignment operator overloading for Material class
Material& Material::operator= (const Material& M){
    this->material_ID = M.material_ID;
    this->price = M.price;
    this->name = M.name;
    this->acoustic_absorption = M.acoustic_absorption;
    this->elasticity = M.elasticity;
    this->reflectivity = M.reflectivity;

    return *this;
}

Material& Material::operator =(const int& arg){

    this->acoustic_absorption = arg;
    this->elasticity = arg;
    this->material_ID = arg;
    this->name = "";
    this->price = arg;
    this->reflectivity = arg;

    return *this;
}

//implementing UkuleleBody constructors
UkuleleBody::UkuleleBody(){
    body_ID = 0;
    price = 0;
    material = 0;
}

UkuleleBody::UkuleleBody(int body_ID, float price, Material material){
    this->body_ID = body_ID;
    this->price = price;
    this->material = material;
}

//implementing UkuleleBody getter methods
int UkuleleBody::getBody_ID(){
    return body_ID;
}

float UkuleleBody::getPrice(){
    return price;
}

Material UkuleleBody::getMaterial(){
    return material;
}

//implementing overloading of assignment operator for UkuleleBody class
UkuleleBody& UkuleleBody::operator =(const UkuleleBody& F){
    this->body_ID = F.body_ID;
    this->price = F.price;
    this->material = F.material;

    return *this;
}

UkuleleBody& UkuleleBody::operator =(const int& arg){
    this->body_ID = arg;
    this->price = arg;
    this->material = arg;

    return *this;
}

//implementing Fret constructors
Fret::Fret(){
    fret_ID = 0;
    price = 0;
    material = 0;
}

Fret::Fret(int fret_ID, float price, Material material){
    this->fret_ID = fret_ID;
    this->price = price;
    this->material = material;
}

//implementing Fret getter methods
int Fret::getFret_ID(){
    return fret_ID;
}

float Fret::getPrice(){
    return price;
}

Material Fret::getMaterial(){
    return material;
}

//implementing overloading of assignment operator for Fret class
Fret& Fret::operator =(const Fret& F){
    this->fret_ID = F.fret_ID;
    this->price = F.price;
    this->material = F.material;

    return *this;
}

Fret& Fret::operator =(const int& arg){
    this->fret_ID = arg;
    this->price = arg;
    this->material = arg;

    return *this;
}

//implementing Fretboard constructors
Fretboard::Fretboard(){
    this->fretboard_ID = 0;
    this->price = 0;
    this->frets = 0;
    this->material = 0;
}

Fretboard::Fretboard(int fretboard_ID, float price, Fret frets, Material material){
    this->fretboard_ID = fretboard_ID;
    this->price = price;
    this->frets = frets;
    this->material = material;
}

//implementing Fretboard getter methods
int Fretboard::getFretboard_ID(){
    return fretboard_ID;
}

float Fretboard::getPrice(){
    return price;
}

Material Fretboard::getMaterial(){
    return material;
}

Fret Fretboard::getFrets(){
    return frets;
}

//implementing overloading of assignment operator for Fretboard class
Fretboard& Fretboard::operator =(const Fretboard& F){
    this->fretboard_ID = F.fretboard_ID;
    this->price = F.price;
    this->material = F.material;
    this->frets = F.frets;

    return *this;
}

Fretboard& Fretboard::operator =(const int& arg){
    this->fretboard_ID = arg;
    this->price = arg;
    this->material = arg;
    this->frets = frets;

    return *this;
}

//implementing TuningHead constructors
TuningHead::TuningHead(){
    head_ID = 0;
    price = 0;
    material = 0;
}

TuningHead::TuningHead(int head_ID, float price, Material material){
    this->head_ID = head_ID;
    this->price = price;
    this->material = material;
}

//implementing TuningHead getter methods
int TuningHead::getHead_ID(){
    return head_ID;
}

float TuningHead::getPrice(){
    return price;
}


Material TuningHead::getMaterial(){
    return material;
}

//implementing overloading of assignment operator for TuningHead class
TuningHead& TuningHead::operator =(const TuningHead& F){
    this->head_ID = F.head_ID;
    this->price = F.price;
    this->material = F.material;

    return *this;
}

TuningHead& TuningHead::operator =(const int& arg){
    this->head_ID = arg;
    this->price = arg;
    this->material = arg;

    return *this;
}

//implementing UkuleleString constructors
UkuleleString::UkuleleString(){
    string_ID = 0;
    price = 0;
    material = 0;
}

UkuleleString::UkuleleString(int string_ID, float price, Material material){
    this->string_ID = string_ID;
    this->price = price;
    this->material = material;
}

//implementing UkuleleString getter methods
int UkuleleString::getString_ID(){
    return string_ID;
}

float UkuleleString::getPrice(){
    return price;
}

Material UkuleleString::getMaterial(){
    return material;
}

//implementing overloading of assignment operator for UkuleleString class
UkuleleString& UkuleleString::operator =(const UkuleleString& F){
    this->string_ID = F.string_ID;
    this->price = F.price;
    this->material = F.material;

    return *this;
}

UkuleleString& UkuleleString::operator =(const int& arg){
    this->string_ID = arg;
    this->price = arg;
    this->material = arg;

    return *this;
}


//implementing Bridge constructors
Bridge::Bridge(){
    bridge_ID = 0;
    price = 0;
    material = 0;
}

Bridge::Bridge(int bridge_ID, float price, Material material){
    this->bridge_ID = bridge_ID;
    this->price = price;
    this->material = material;
}

//implementing Bridge getter methods
int Bridge::getBridge_ID(){
    return bridge_ID;
}

float Bridge::getPrice(){
    return price;
}

Material Bridge::getMaterial(){
    return material;
}

//implementing overloading of assignment operator for Bridge class
Bridge& Bridge::operator =(const Bridge& F){
    this->bridge_ID = F.bridge_ID;
    this->price = F.price;
    this->material = F.material;

    return *this;
}

Bridge& Bridge::operator =(const int& arg){
    this->bridge_ID = arg;
    this->price = arg;
    this->material = arg;

    return *this;
}

//implementing Saddle constructors
Saddle::Saddle(){
    saddle_ID = 0;
    price = 0;
    material = 0;
}

Saddle::Saddle(int saddle_ID, float price, Material material){
    this->saddle_ID = saddle_ID;
    this->price = price;
    this->material = material;
}

//implementing Saddle getter methods
int Saddle::getSaddle_ID(){
    return saddle_ID;
}

float Saddle::getPrice(){
    return price;
}

Material Saddle::getMaterial(){
    return material;
}

//implementing overloading of assignment operator for Saddle class
Saddle& Saddle::operator =(const Saddle& F){
    this->saddle_ID = F.saddle_ID;
    this->price = F.price;
    this->material = F.material;

    return *this;
}

Saddle& Saddle::operator =(const int& arg){
    this->saddle_ID = arg;
    this->price = arg;
    this->material = arg;

    return *this;
}

//implementing UkuleleType constructors
UkuleleType::UkuleleType(){
    name = "";
    ukulele_length = 0;
    scale_length = 0;
    number_frets = 0;
    range = "";
    common_tuning = "";
    alternate_tuning = "";
}

UkuleleType::UkuleleType(string name, float ukulele_length, float scale_length, int number_frets, string range, string common_tuning, string alternate_tuning){
    this->name = name;
    this->ukulele_length = ukulele_length;
    this->scale_length = scale_length;
    this->number_frets = number_frets;
    this->range = range;
    this->common_tuning = common_tuning;
    this->alternate_tuning = alternate_tuning;
}

//implementing UkuleleType getter methods
string UkuleleType::getName(){
    return name;
}

float UkuleleType::getUkulele_length(){
    return ukulele_length;
}

float UkuleleType::getScale_length(){
    return scale_length;
}

int UkuleleType::getNumber_frets(){
    return number_frets;
}

string UkuleleType::getRange(){
    return range;
}

string UkuleleType::getCommon_tuning(){
    return common_tuning;
}

string UkuleleType::getAlternate_tuning(){
    return alternate_tuning;
}

//implementing overloading of assignment operator for UkuleleType class
UkuleleType& UkuleleType::operator =(const UkuleleType& U){
    this->alternate_tuning = U.alternate_tuning;
    this->common_tuning = U.common_tuning;
    this->name = U.name;
    this->number_frets = U.number_frets;
    this->range = U.range;
    this->scale_length = U.scale_length;
    this->ukulele_length = U.ukulele_length;

    return *this;
}

UkuleleType& UkuleleType::operator =(const int& arg){
    this->alternate_tuning = "";
    this->common_tuning = "";
    this->name = "";
    this->number_frets = arg;
    this->range = "";
    this->scale_length = arg;
    this->ukulele_length = arg;

    return *this;
}

//implementing Ukulele constructors
Ukulele::Ukulele(){
    ukulele_ID = 0;
    price = 0;
    type = 0;
    body = 0;
    fretboard = 0;
    tuning_head = 0;
    ukulele_string = 0;
    bridge = 0;
    saddle = 0;
}

Ukulele::Ukulele(int ukulele_ID, float price, UkuleleType type, UkuleleBody body, Fretboard fretboard, TuningHead tuning_head, UkuleleString ukulele_string, Bridge bridge, Saddle saddle){
    this->ukulele_ID = ukulele_ID;
    this->price = price;
    this->type = type;
    this->body = body;
    this->fretboard = fretboard;
    this->tuning_head = tuning_head;
    this->ukulele_string = ukulele_string;
    this->bridge = bridge;
    this->saddle = saddle;
}

//implementing Ukulele getter methods
int Ukulele::getUkulele_ID(){
    return ukulele_ID;
}

float Ukulele::getPrice(){
    return price;
}

UkuleleType Ukulele::getUkuleleType(){
    return type;
}

UkuleleBody Ukulele::getUkuleleBody(){
    return body;
}

Fretboard Ukulele::getFretboard(){
    return fretboard;
}

TuningHead Ukulele::getTuningHead(){
    return tuning_head;
}

UkuleleString Ukulele::getString(){
    return ukulele_string;
}

Bridge Ukulele::getBridge(){
    return bridge;
}

Saddle Ukulele::getSaddle(){
    return saddle;
}

Ukulele& Ukulele::operator =(const Ukulele& U){
    this->body = U.body;
    this->bridge = U.bridge;
    this->fretboard = U.fretboard;
    this->price = U.price;
    this->saddle = U.saddle;
    this->tuning_head = U.tuning_head;
    this->type = U.type;
    this->ukulele_ID = U.ukulele_ID;
    this->ukulele_string = U.ukulele_string;

    return *this;
}

Ukulele& Ukulele::operator =(const int& arg){
    this->body = 0;
    this->bridge = 0 ;
    this->fretboard = 0;
    this->price = arg;
    this->saddle = 0;
    this->tuning_head = 0;
    this->type = 0;
    this->ukulele_ID = 0;
    this->ukulele_string = 0;

    return *this;
}

//implementing Supplier class
Supplier::Supplier(){
    supplier_ID = 0;
    supplier_name = "";
    supplied_material = 0;
}

Supplier::Supplier(int supplier_ID, string supplier_name, Material supplied_material){
    this->supplier_ID = supplier_ID;
    this->supplier_name = supplier_name;
    this->supplied_material = supplied_material;
}

int Supplier::getSupplier_ID(){
    return supplier_ID;
}

string Supplier::getSupplier_name(){
    return supplier_name;
}

Material Supplier::getSupplied_Material(){
    return supplied_material;
}

Supplier& Supplier::operator =(const Supplier& S){
    this->supplier_ID = S.supplier_ID;
    this->supplier_name = S.supplier_name;
    this->supplied_material = S.supplied_material;

    return *this;
}

Supplier& Supplier::operator =(const int& arg){
    this->supplier_ID = arg;
    this->supplier_name = "";
    this->supplied_material = 0;

    return *this;
}

//implementing Manager class
Manager::Manager(){
    manager_ID = 0;
    name = "";
    salary = 0;
}

Manager::Manager(int manager_ID, string name, float salary){
    this->manager_ID = manager_ID;
    this->name = name;
    this->salary = salary;
}

int Manager::getManager_ID(){
    return manager_ID;
}

string Manager::getName(){
    return name;
}

float Manager::getSalary(){
    return salary;
}

Manager& Manager::operator =(const Manager& M){

    this->manager_ID = M.manager_ID;
    this->name = M.name;
    this->salary = M.salary;

    return *this;
}

Manager& Manager::operator =(const int& arg){

    this->manager_ID = arg;
    this->name = "";
    this->salary = 0;

    return *this;
}

//implementing Employee class
Employee::Employee(){
    employee_ID = 0;
    name = "";
    salary = 0;
    qualification = "";
}

Employee::Employee(int employee_ID, string name, float salary, string qualification){
    this->employee_ID = employee_ID;
    this->name = name;
    this->salary = salary;
    this->qualification = qualification;
}

int Employee::getEmployee_ID(){
    return employee_ID;
}

string Employee::getName(){
    return name;
}

float Employee::getSalary(){
    return salary;
}

string Employee::getQualification(){
    return qualification;
}

Employee& Employee::operator =(const Employee& M){

    this->employee_ID = M.employee_ID;
    this->name = M.name;
    this->salary = M.salary;
    this->qualification = M.qualification;

    return *this;
}

Employee& Employee::operator =(const int& arg){

    this->employee_ID = arg;
    this->name = "";
    this->salary = 0;
    this->qualification = "";

    return *this;
}

//implementing Productionfactory class
ProductionFactory::ProductionFactory(){
    factory_ID = 0;
    address = "";
    contacts = "";
    manager = 0;
}

ProductionFactory::ProductionFactory(int factory_ID, string address, string contacts, Manager manager){
    this->factory_ID = factory_ID;
    this->address = address;
    this->contacts = contacts;
    this->manager = manager;
}

int ProductionFactory::getFactory_ID(){
    return factory_ID;
}

string ProductionFactory::getAddress(){
    return address;
}

string ProductionFactory::getContacts(){
    return contacts;
}

Manager ProductionFactory::getManager(){
    return manager;
}

ProductionFactory& ProductionFactory::operator =(const ProductionFactory& P){
    this->factory_ID = P.factory_ID;
    this->address = P.address;
    this->contacts = P.contacts;
    this->manager = P.manager;

    return *this;
}

ProductionFactory& ProductionFactory::operator =(const int& arg){
    this->factory_ID = arg;
    this->address = "";
    this->contacts = "";
    this->manager = 0;

    return *this;
}

//implementation of Woodfactory class
void WoodFactory::setManager(Manager M){
    this->wood_factory_manager = M;
}

Manager WoodFactory::getManager(){
    return wood_factory_manager;
}

void WoodFactory::ukuleleBodyProduction(Employee employee, UkuleleBody body){
    this->employee = employee;
    this->body = body;
}

void WoodFactory::fretboardProduction(Employee employee, Fretboard fretboard){
    this->employee = employee;
    this->fretboard = fretboard;
}

void WoodFactory::bridgeProduction(Employee employee, Bridge bridge){
    this->employee = employee;
    this->bridge = bridge;
}

void WoodFactory::saddleProduction(Employee employee, Saddle saddle){
    this->employee = employee;
    this->saddle = saddle;
}

WoodFactory& WoodFactory::operator =(const WoodFactory& P){
    this->body = P.body;
    this->bridge = P.bridge;
    this->employee = P.employee;
    this->fretboard = P.fretboard;
    this->saddle = P.saddle;
    this->wood_factory_manager = P.wood_factory_manager;

    return *this;
}

WoodFactory& WoodFactory::operator =(const int& arg){
    this->body = 0;
    this->bridge = 0;
    this->employee = 0;
    this->fretboard = arg;
    this->saddle = 0;
    this->wood_factory_manager = 0;

    return *this;
}

//implementation of Metalfactory class
void MetalFactory::setManager(Manager M){
    this->metal_factory_manager = M;
}

Manager MetalFactory::getManager(){
    return metal_factory_manager;
}

void MetalFactory::ukuleleStringProduction(Employee employee, UkuleleString str){
    this->employee = employee;
    this->str = str;
}

void MetalFactory::tuningHeadProduction(Employee employee, TuningHead head){
    this->employee = employee;
    this->head = head;
}

void MetalFactory::bridgeProduction(Employee employee, Bridge bridge){
    this->employee = employee;
    this->bridge = bridge;
}

void MetalFactory::saddleProduction(Employee employee, Saddle saddle){
    this->employee = employee;
    this->saddle = saddle;
}

MetalFactory& MetalFactory::operator =(const MetalFactory& P){
    this->head = P.head;
    this->bridge = P.bridge;
    this->employee = P.employee;
    this->str = P.str;
    this->saddle = P.saddle;
    this->metal_factory_manager = P.metal_factory_manager;

    return *this;
}

MetalFactory& MetalFactory::operator =(const int& arg){
    this->head = arg;
    this->bridge = arg;
    this->employee = arg;
    this->str = arg;
    this->saddle = arg;
    this->metal_factory_manager = arg;

    return *this;
}

ManagementCockpit::ManagementCockpit(){
    this->supplier1 = 0;
    this->supplier2 = 0;
    this->ukulele = 0;
    this->metal_f = 0;
    this->wood_f = 0;
}

void ManagementCockpit::ukulele_request(Supplier supplier1, Supplier supplier2, Ukulele ukulele , MetalFactory metal_f, WoodFactory wood_f){

    this->supplier1 = supplier1;
    this->supplier2 = supplier2;
    this->ukulele = ukulele;
    this->metal_f = metal_f;
    this->wood_f = wood_f;
}

Supplier ManagementCockpit::getSupplier1(){
    return supplier1;
}

Supplier ManagementCockpit::getSupplier2(){
    return supplier2;
}

Ukulele ManagementCockpit::getUkulele(){
    return ukulele;
}

MetalFactory ManagementCockpit::getMetalFactory(){
    return metal_f;
}

WoodFactory ManagementCockpit::getWoodFactory(){
    return wood_f;
}

void ManagementCockpit::print_output(){
    cout <<"Supplier1: " << supplier1.getSupplier_name()  << "(name), " << supplier1.getSupplier_ID() << "(ID)" << endl;
    cout << "supplies " << supplier1.getSupplied_Material().getName() << "to"<< endl;
    cout << "metal factory with ID: " << metal_f.getFactory_ID()<< endl;

    cout <<"Supplier2: " << supplier2.getSupplier_name()  << "(name), " << supplier2.getSupplier_ID() << "(ID)" << endl;
    cout << "supplies " << supplier2.getSupplied_Material().getName() << "to"<< endl;
    cout << "metal factory with ID: " << wood_f.getFactory_ID()<< endl;
}






