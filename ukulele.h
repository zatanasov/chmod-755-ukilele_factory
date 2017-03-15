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
};





