#ifndef _XXX_
#define _XXX_
#include <iostream>
#include <string>
using namespace std;
#include "ukulele.h"
#endif


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

