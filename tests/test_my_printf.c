#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, flag_d, .init = redirect_all_std)
{
    my_printf("int test: %d", 42);
    cr_assert_stdout_eq_str("int test: 42");
}

Test(my_printf, flag_d_negative, .init = redirect_all_std)
{
    my_printf("negative int test: %d", -42);
    cr_assert_stdout_eq_str("negative int test: -42");
}

Test(my_printf, flag_ld, .init = redirect_all_std)
{
    my_printf("long int test: %ld", 123456789L);
    cr_assert_stdout_eq_str("long int test: 123456789");
}

Test(my_printf, flag_u, .init = redirect_all_std)
{
    my_printf("unsigned int test: %u", 42U);
    cr_assert_stdout_eq_str("unsigned int test: 42");
}

Test(my_printf, flag_x, .init = redirect_all_std)
{
    my_printf("hex test: %x", 255);
    cr_assert_stdout_eq_str("hex test: ff");
}

Test(my_printf, flag_X, .init = redirect_all_std)
{
    my_printf("hex uppercase test: %X", 255);
    cr_assert_stdout_eq_str("hex uppercase test: FF");
}

Test(my_printf, flag_o, .init = redirect_all_std)
{
    my_printf("octal test: %o", 42);
    cr_assert_stdout_eq_str("octal test: 52");
}

Test(my_printf, flag_c, .init = redirect_all_std)
{
    my_printf("char test: %c", 'A');
    cr_assert_stdout_eq_str("char test: A");
}

Test(my_printf, flag_s, .init = redirect_all_std)
{
    my_printf("string test: %s", "example");
    cr_assert_stdout_eq_str("string test: example");
}

Test(my_printf, flag_f, .init = redirect_all_std)
{
    my_printf("float test: %.2f", 3.14159);
    cr_assert_stdout_eq_str("float test: 3.14");
}

Test(my_printf, flag_p, .init = redirect_all_std)
{
    int num = 42;
    my_printf("pointer test: %p", (void *)&num);
    char expected[50];
    sprintf(expected, "pointer test: %p", (void *)&num);
    cr_assert_stdout_eq_str(expected);
}

Test(my_printf, flag_percent, .init = redirect_all_std)
{
    my_printf("percent test: %%");
    cr_assert_stdout_eq_str("percent test: %");
}

Test(my_printf, mixed_specifiers, .init = redirect_all_std)
{
    my_printf("Mix: %d, %s, %c, %x", 42, "hello", 'A', 255);
    cr_assert_stdout_eq_str("Mix: 42, hello, A, ff");
}

Test(my_printf, random_test, .init = redirect_all_std)
{
    my_printf("hello%s test%i aa%%aa", " world", 84);
    cr_assert_stdout_eq_str("hello world test84 aa%aa");
}

Test(my_printf, zero_integer, .init = redirect_all_std)
{
    my_printf("zero test: %d", 0);
    cr_assert_stdout_eq_str("zero test: 0");
}

Test(my_printf, empty_string, .init = redirect_all_std)
{
    my_printf("string test: %s", "");
    cr_assert_stdout_eq_str("string test: ");
}
