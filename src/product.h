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


#ifndef PRODUCT_H_
#define PRODUCT_H_

#include "./amazon.h"

#include <string>

class Product : Amazon::Product {
public:
  Product() {}
  virtual std::string EAN() const { return ean_; }
  void set_EAN(const std::string& ean) { ean_ = ean; }
private:
  // TODO: add items
  std::string ean_;
};

#endif  // PRODUCT_H_
