def classify(number):
    if number == 0: raise ValueError("Zero is not a natural number")
    if number < 0: raise ValueError("Negative integer is not a natural number")
    aliquots = []
    for i in range(1, number):
        if number % i == 0:
            aliquots.append(i)
    if sum(aliquots) == number:
        return "perfect"
    elif sum(aliquots) > number:
        return "abundant"
    elif sum(aliquots) < number:
        return "deficient"