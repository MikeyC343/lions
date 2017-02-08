//
//  main.cpp
//  Tests
//
//  Created by Michael Cabana on 2017-01-30.
//  Copyright © 2017 Michael Cabana. All rights reserved.
//

#include <iostream>
#include "Person.h"

void f1() {
    Person p(0);
}

Person f2() {
    return Person(2);
}

Person* f3() {
    return new Person(3);
}

Person& f4(Person &p) {
    return p;
}

Person g1(-2);

int main(int argc, char *argv[]) {
    
    std::cout << "Start main" << std::endl;
    
    // Create local in f1
    f1();
    
    // Local
    Person p1(1);
    
    // Return local copy
    Person p2 = f2();
    
    // Return pointer
    Person *p3 = f3();
    
    // Return reference
    Person tmp = Person(4);
    Person &p4 = f4(tmp);
    
    static Person p5(5);
    
    // Delete pointer
    delete p3;
    return 0;
}

Person g2(-1);
