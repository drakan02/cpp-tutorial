/*
- STL có hàng trăm hàm thuật toán sẵn, hoạt động trên các container thông qua iterator.

- Thuật toán dùng được với Input Iterator:
    all_of, any_of, none_of
    for_each
    count, count_if
    find, find_if, find_if_not
    mismatch
    equal
    search, search_n
    adjacent_find
    max_element, min_element, minmax_element

- Thuật toán dùng được với Output Iterator
    copy, copy_if, copy_n
    move, move_backward
    fill, fill_n
    generate, generate_n
    transform
    replace, replace_if
    swap_ranges

- Thuật toán dùng được với Forward Iterator
    Toàn bộ thuật toán cho Input + Output.
    remove, remove_if
    unique
    partition, stable_partition
    is_partitioned, partition_copy
    merge, set_union, set_intersection, set_difference, set_symmetric_difference

- Thuật toán dùng được với Bidirectional Iterator
    Toàn bộ thuật toán của Forward.
    reverse
    reverse_copy

- Thuật toán dùng được với Random Access Iterator
    Toàn bộ thuật toán của Bidirectional.
    sort
    stable_sort
    partial_sort, partial_sort_copy
    nth_element
    binary_search, lower_bound, upper_bound, equal_range
    inplace_merge
    shuffle
*/