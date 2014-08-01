#pragma once
#include "gtest/gtest.h"
#include <string>
#include "../connection/mongoclient.h"

const std::string HOST = "localhost";
const std::string PORT = "27017";

const std::string COLL = "test.testdata";

class MongoDriverTest: public ::testing::Test
{
  protected:
    mongo::MongoClient c;
    virtual void SetUp()
    {
      c.connect(HOST, PORT);
    }    
};