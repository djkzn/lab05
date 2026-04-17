#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Account.h"
#include "Transaction.h"

TEST(AccountTest, InitialBalance) {
    Account a(1, 100);
    EXPECT_EQ(a.GetBalance(), 100);
}

TEST(AccountTest, Deposit) {
    Account a(1, 0);
    a.SetBalance(a.GetBalance() + 50);
    EXPECT_EQ(a.GetBalance(), 50);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
