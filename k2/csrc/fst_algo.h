#include <k2/fst.h>


namespace k2 {

/*
  The core part of Connect().  Connect() removes states that are not accessible
  or are not coaccessible, i.e. not reachable from start state or cannot reach the
  final state.

  If the resulting Fsa is empty, `state_map` will be empty at exit.

     @param [in] fsa  The FSA to be connected.  Requires
     @param [out] state_map   Maps from state indexes in the output fsa to
                      state indexes in `fsa`.  Will retain the original order,
                      so the output will be topologically sorted if the input
                      was.
 */
void ConnectCore(const Fsa &fsa,
                 std::vector<int32> *state_map);


} // namespace k2
