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
  virtual std::string EAN() const = 0;
};

class Article : Product {
public:
  Article() {}
  virtual std::string EAN() const { return ean_; }
private:
  std::string ean_;
};

class Query {
public:
  Query(std::string const secret_key, std::string const access_key)
    : secret_key_(secret_key), access_key_(access_key) {};
  // TODO:
  Article SearchProduct(Product p) {}
private:
  std::string secret_key_;
  std::string access_key_;
};

}  // Amazon
#endif  // AMAZON_H_
