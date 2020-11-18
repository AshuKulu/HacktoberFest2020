>>> numbers_tuple = (6, 9, 3, 1)
>>> numbers_set = {5, 5, 10, 1, 0}
>>> numbers_tuple_sorted = sorted(numbers_tuple)
>>> numbers_set_sorted = sorted(numbers_set)
>>> numbers_tuple_sorted
[1, 3, 6, 9]
>>> numbers_set_sorted
[0, 1, 5, 10]
>>> tuple(numbers_tuple_sorted)
(1, 3, 6, 9)
>>> set(numbers_set_sorted)
{0, 1, 10, 5}
