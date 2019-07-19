//
//  AmphibianCar.h
//  Demo
//
//  Created by miniu on 15/7/4.
//  Copyright (c) 2015年 miniu. All rights reserved.
//

#ifndef __Demo__AmphibianCar__
#define __Demo__AmphibianCar__

#include <iostream>
using namespace::std;

class Vehicle
{
public:
    Vehicle(int weight = 0)
    {
        this->weight = weight;
    }
    
    void SetWeight(int weight)
    {
        cout << "set weigth" << endl;
        this->weight = weight;
    }
    
    virtual void Show() = 0;
    
protected:
    int weight;
};

class Car : public Vehicle
{
public:
    Car(int weight = 0, int arid = 0) : Vehicle(weight)
    {
        this->arid = arid;
    }
    
    virtual void Show() { cout << "I am a Car." << endl; }
    
protected:
    int arid;
};

class Boat : public Vehicle
{
public:
    Boat(int weight = 0, float tonnage = 0) : Vehicle(weight)
    {
        this->tonnage = tonnage;
    }
    
    virtual void Show() { cout << "I am a Boat." << endl; }
    
protected:
    float tonnage;
};

class AmphibianCar : public Car, public Boat
{
public:
    AmphibianCar(int weight = 0, int arid = 0, float tonnage = 0)
    : Car(weight, arid), Boat(weight, tonnage)
    {
        
    }
    
    virtual void Show() { cout << "I am AmphibianCar." << endl; }
};






#endif /* defined(__Demo__AmphibianCar__) */
