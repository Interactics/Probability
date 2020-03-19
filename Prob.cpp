//
//  Prob.cpp
//  Probability
//
//  Created by RyuHo-yeon on 2020/03/19.
//  Copyright © 2020 HY_Yu. All rights reserved.
//

#include "Prob.h"

namespace PB{

BigINT Probability::Factorial(BigINT n){
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

BigINT Probability::Permutation(BigINT n, BigINT r){
    return Factorial(n)/Factorial(n-r);
}
BigINT Probability::Combination(BigINT n, BigINT r){
    return Factorial(n)/(Factorial(n-r)*Factorial(r));
}



}
