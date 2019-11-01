//
//  main.cpp
//  AiBang
//
//  Created by Linkyrie on 2019/10/30.
//  Copyright © 2019 林恺锐. All rights reserved.
//

#include "aigobang.hpp"
#include <memory>
#include <iostream>
using namespace std;
int main() {
    std::shared_ptr<AiGoBang> p = std::make_shared<AiGoBang>();
//    p->setPos(7, 7, 1);
//    p->setPos(3, 3, 2);
//    cout << p->Evaluate(1) << endl;
//    cout << p->Evaluate(2) << endl;
    p->test();
    return 0;
}
