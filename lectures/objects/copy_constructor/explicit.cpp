/** @file
 * This file is part of the Advanced Progamming lecture.
 *
 * @author Alexander Breuer (breuera AT in.tum.de, http://www5.in.tum.de/wiki/index.php/Dipl.-Math._Alexander_Breuer)
 *
 * @section LICENSE
 * Copyright (c) 2014
 * Technische Universitaet Muenchen
 * Department of Informatics
 * Chair of Scientific Computing
 * http://www5.in.tum.de/
 *
 * @section DESCRIPTION
 * Simple example which shows the an explicit copy constructor. 
 **/

#include <iostream>
#include <string>

class SimpleClass {
  // private:
    int m_a;
    std::string m_b;

  public:
    SimpleClass(){};

    SimpleClass( const SimpleClass &i_src ):
      m_a( i_src.m_a ),
      m_b( i_src.m_b ) {
      std::cout << "copy constructor called" << std::endl;
    };
    void setValues( int i_a, const std::string &i_b ) { m_a=i_a; m_b=i_b; };
    void printValues() { std::cout << m_a << ", " << m_b << std::endl; };
};

int main() {
  std::string test;
  std::string test2(test);

  SimpleClass l_simple1;
  l_simple1.setValues( 1, "simple1" );
  l_simple1.printValues();

  // call copy constructor
  SimpleClass l_simple2( l_simple1 );
  l_simple2.printValues(); 
}
