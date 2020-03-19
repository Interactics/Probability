//
//  Prob.hpp
//  Probability
//
//  Created by RyuHo-yeon on 2020/03/19.
//  Copyright © 2020 HY_Yu. All rights reserved.
//

#ifndef Prob_h
#define Prob_h

typedef unsigned long long BigINT;
namespace  PB {
class Probability{
public:
    BigINT Factorial(BigINT n);
    BigINT Permutation(BigINT n, BigINT r);
    BigINT Combination(BigINT n, BigINT r);
};
}


#endif /* Prob_h */
