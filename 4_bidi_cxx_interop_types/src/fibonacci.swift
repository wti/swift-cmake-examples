//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift open source project
//
// Copyright (c) 2023 Apple Inc. and the Swift project authors.
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
//
//===----------------------------------------------------------------------===//

import Fibonacci

func callTypes() {
    print("\(#function) int: \(DemoTypes.call_int(21))")
}

callTypes()

print(fibonacci_cpp(3))

