//
//  Person.cpp
//  Tests
//
//  Created by Michael Cabana on 2017-02-03.
//  Copyright © 2017 Michael Cabana. All rights reserved.
//

#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(int id) {
    this->id = id;
    cout << "Person: " << id << " created!" << endl;
}

Person::~Person() {
    cout << "Person: " << id << " destroyed!" << endl;
}
