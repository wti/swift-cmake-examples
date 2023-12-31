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

#ifndef FIBONACCI_FIBONACCI_H
#define FIBONACCI_FIBONACCI_H

#include <swift/bridging>

// if not defined in bridging, compiler support is not available
#if !defined(SWIFT_SELF_CONTAINED) 
#error "Swift/C++ interop n/a in compiler"
#endif

int fibonacci_cpp(int x);

//Swift::string type_string(Swift::string x);
#endif // FIBONACCI_FIBONACCI_H
