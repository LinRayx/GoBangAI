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
#include "aigobang.hpp"
using namespace std;
int main() {
    std::shared_ptr<AiGoBang> p = std::make_shared<AiGoBang>();

    p->test();
    return 0;
}
