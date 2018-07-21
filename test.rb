require 'test/unit'

class TestInteger < Test::Unit::TestCase

  def test_12
    assert_equal([1, 2, 3, 4, 6, 12], 12.divisors)
  end

  def test_100
    assert_equal([1, 2, 4, 5, 10, 20, 25, 50, 100], 100.divisors)
  end

  def test_non_positive
    assert_equal([], 0.divisors)
    assert_equal([], -1.divisors)
  end

  def test_prime?
    primes = [
      2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
      43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
    ]
    primes.each do |p|
      assert_equal(true, p.is_prime?)
    end
  end

  def test_no_prime?
    primes = [0, 1, 4, 6, 10]
    primes.each do |p|
      assert_equal(false,  p.is_prime?)
    end
  end

  def test_perfect?
    perfects = [6, 28, 496, 8128]
    perfects.each do |p|
      assert_equal(true, p.is_perfect?)
    end
  end

  def test_no_perfect?
    perfects = [1, 2, 3, 5, 7, 495, 497]
    perfects.each do |p|
      assert_equal(false, p.is_perfect?)
    end
  end
end
