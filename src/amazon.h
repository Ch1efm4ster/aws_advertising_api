/*
 * This file is part of the aws_advertising_api
 * (https://github.com/Ch1efm4ster/aws_advertising_api).
 * Copyright (c) 2018 XXX XXX.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef AMAZON_H_
#define AMAZON_H_

#include <string>
#include <vector>

namespace Amazon {

class Product {
public:
  virtual std::string EAN() = 0;
};

class Query {
public:
  Query() {};
  // TODO:
  Product SearchProduct(Product p) {}
private:

};

}  // Amazon
#endif  // AMAZON_H_
