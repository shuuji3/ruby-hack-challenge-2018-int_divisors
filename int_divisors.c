#include <ruby/ruby.h>

static VALUE
int_divisors(VALUE self)
{
    VALUE array = rb_ary_new();
    long num = FIX2LONG(self);

    for (long i = 1; i <= num; i++) {
        if (num % i == 0) {
            rb_ary_push(array, LONG2NUM(i));
        }
    }

    return array;
}

static VALUE
int_prime_p(VALUE self)
{
    long len = RARRAY_LEN(int_divisors(self));
    if (len == 2) {
        return Qtrue;
    } else {
        return Qfalse;
    }
}

static VALUE
int_perfect_p(VALUE self)
{
    VALUE divisors = int_divisors(self);

    long sum = 0;
    for (long i = 0; i < RARRAY_LEN(divisors) - 1; i++) {
        sum += NUM2LONG(RARRAY_AREF(divisors, i));
    }

    if (sum == NUM2LONG(self)) {
        return Qtrue;
    } else {
        return Qfalse;
    }
}

void
Init_int_divisors(void) {
    rb_define_method(rb_cInteger, "divisors", int_divisors, 0);
    rb_define_method(rb_cInteger, "is_prime?", int_prime_p, 0);
    rb_define_method(rb_cInteger, "is_perfect?", int_perfect_p, 0);
}
