def distance(strand_a, strand_b):
    if len(strand_a) == 0 and len(strand_b) == 0:
        return 0
    elif not strand_a or not strand_b or len(strand_a) != len(strand_b):
        raise ValueError("Each strand's length must be the same")
    return sum(1 if strand_a[i] != strand_b[i] else 0 for i in range(len(strand_a)))