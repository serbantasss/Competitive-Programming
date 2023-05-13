import UIKit

var str = "Hello, playground"

let mata : CUnsignedLongLong = 78
print(str,mata)
var apples=5
let oranges=10
let quotation = """
I said "I have \(apples) apples."
And then I said "I have \(apples + oranges) pieces of fruit."
"""
print(quotation)
var shoppingList = ["catfish", "water", "tulips"]
shoppingList[1] = "bottle of water"

var occupations = [
    "Malcolm": "Captain",
    "Kaylee": "Mechanic",
]
occupations["Jayne"] = "Public Relations"
shoppingList.append("blue paint")
print(shoppingList)
let emptyArray = [String]()
let emptyDictionary = [String: Float]()
let v=[12,43,87,75,103]
var tscore=0
for score in v
{
    if score>50{
        tscore += 3
    }
    else{
        tscore+=1
    }
}
print(tscore)
let nickName: String? = nil
let fullName: String = "John Appleseed"
let informalGreeting = "Hi \(nickName ?? fullName)"
let interestingNumbers = [
    "Prime": [2, 3, 5, 7, 11, 13],
    "Fibonacci": [1, 1, 2, 3, 5, 8],
    "Square": [1, 4, 9, 16, 25],
]
var largest = 0
for (_, numbers) in interestingNumbers {
    for number in numbers {
        if number > largest {
            largest = number
        }
    }
}
print(largest)
// Prints "25"
