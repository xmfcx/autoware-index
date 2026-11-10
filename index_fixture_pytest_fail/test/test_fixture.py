def test_passes():
    assert 1 + 1 == 2


def test_compares_wrong_sum():
    assert 1 + 1 == 3, "the sum is wrong on purpose"
