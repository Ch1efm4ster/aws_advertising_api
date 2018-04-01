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


#ifndef LOADER_H_
#define LOADER_H_

#include "./product.h"
#include "./amazon.h"

#include <fstream>
#include <vector>

namespace Load {
  // TODO:
  // - list files
  // - map files on products
  std::vector<Product> CSV(std::string folder = "resources/csv") {
    std::vector<Product> products;
    return products;
  }
  // TODO:
  // - Read file
  // - parse json
  Amazon::Query Amazon(std::string file = "resources/user.json") {
    std::string secret;
    std::string access;
    return Amazon::Query(secret, access);
  }

}  // Load

#endif  // LOADER_H_
