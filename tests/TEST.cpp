#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Account.h"
#include "Transaction.h"

TEST(AccountTest, InitialBalance) {
    Account a(1, 100);
    EXPECT_EQ(a.GetBalance(), 100);
}

TEST(AccountTest, ChangeBalance) {
    Account a(1, 100);
    a.Lock();
    a.ChangeBalance(50);
    EXPECT_EQ(a.GetBalance(), 150);
    a.Unlock();
}

TEST(AccountTest, Id) {
    Account a(42, 0);
    EXPECT_EQ(a.id(), 42);
}

TEST(AccountTest, LockThrows) {
    Account a(1, 100);
    a.Lock();
    EXPECT_THROW(a.Lock(), std::runtime_error);
    a.Unlock();
}

TEST(AccountTest, ChangeBalanceWithoutLockThrows) {
    Account a(1, 100);
    EXPECT_THROW(a.ChangeBalance(50), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
