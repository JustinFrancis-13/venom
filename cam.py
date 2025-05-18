if __name__ == '__main__':
    students = []

    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])

    # Step 1: Get unique scores
    scores = []
    for student in students:
        if student[1] not in scores:
            scores.append(student[1])

    # Step 2: Sort scores manually (simple selection sort)
    for i in range(len(scores)):
        min_idx = i
        for j in range(i + 1, len(scores)):
            if scores[j] < scores[min_idx]:
                min_idx = j
        scores[i], scores[min_idx] = scores[min_idx], scores[i]

    second_lowest = scores[1]

    # Step 3: Get names with second lowest score
    names = []
    for student in students:
        if student[1] == second_lowest:
            names.append(student[0])

    # Step 4: Sort names manually (alphabetical)
    for i in range(len(names)):
        min_idx = i
        for j in range(i + 1, len(names)):
            if names[j].lower() < names[min_idx].lower():
                min_idx = j
        names[i], names[min_idx] = names[min_idx], names[i]

    # Step 5: Print names
    for name in names:
        print(name)
