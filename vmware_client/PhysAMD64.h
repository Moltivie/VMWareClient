#pragma once

ULONG_PTR AMD64_PML4E(ULONG_PTR PhysBase, ULONG_PTR VirtualAddress);
ULONG_PTR AMD64_PDPTE(ULONG_PTR PML4E, ULONG_PTR VirtualAddress);
ULONG_PTR AMD64_PDE(ULONG_PTR PDPTE, ULONG_PTR VirtualAddress);
ULONG_PTR AMD64_PTE(ULONG_PTR PDE, ULONG_PTR VirtualAddress);
ULONG_PTR AMD64_1GAddress(ULONG_PTR PDPTE, ULONG_PTR VirtualAddress);
ULONG_PTR AMD64_2MAddress(ULONG_PTR PDE, ULONG_PTR VirtualAddress);
ULONG_PTR AMD64_PhysicalAddress(ULONG_PTR PTE, ULONG_PTR VirtualAddress);

bool AMD64_PageSizeFlag(ULONG_PTR Entry);

ULONG_PTR AMD64_VirtualToPhysical(ULONG_PTR PhysBase, ULONG_PTR VirtualAddress);