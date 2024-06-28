//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLigerProcessor_h
#define FBLigerProcessor_h
@import Foundation;

@protocol {EventBase="_vptr$TimeoutManager"^^?"cobTimeouts_"{unique_ptr<folly::TimeoutManager::CobTimeouts, std::default_delete<folly::TimeoutManager::CobTimeouts>>="__ptr_"{__compressed_pair<folly::TimeoutManager::CobTimeouts *, std::default_delete<folly::TimeoutManager::CobTimeouts>>="__value_"^{CobTimeouts}}}"_vptr$DrivableExecutor"^^?"_vptr$IOExecutor"^^?"_vptr$SequencedExecutor"^^?"_vptr$ScheduledExecutor"^^?"_vptr$GetThreadIdCollector"^^?"intervalDuration_"{duration<long long, std::ratio<1, 1000>>="__rep_"q}"enableTimeMeasurement_"B"strictLoopThread_"B"loopState_"{optional<folly::EventBase::LoopState>=""(?="__null_state_"c"__val_"{LoopState="prev"{time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>="__d_"{duration<long long, std::ratio<1, 1000000000>>="__rep_"q}}"idleStart"{time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>="__d_"{duration<long long, std::ratio<1, 1000000000>>="__rep_"q}}})"__engaged_"B}"loopTid_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>="__a_value"Ai}}"loopThread_"{atomic<std::__thread_id>="__a_"{__cxx_atomic_impl<std::__thread_id, std::__cxx_atomic_base_impl<std::__thread_id>>="__a_value"A{__thread_id}}}"wheelTimer_"{unique_ptr<folly::HHWheelTimerBase<std::chrono::milliseconds>, folly::DelayedDestruction::Destructor>="__ptr_"{__compressed_pair<folly::HHWheelTimerBase<std::chrono::milliseconds> *, folly::DelayedDestruction::Destructor>="__value_"^v}}"loopCallbacks_"{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>>="data_"{data_t="root_plus_size_"{root_plus_size="m_header"{default_header_holder<boost::intrusive::list_node_traits<void *>>="next_"^v"prev_"^v}}}}"runBeforeLoopCallbacks_"{list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>>="data_"{data_t="root_plus_size_"{root_plus_size="m_header"{default_header_holder<boost::intrusive::list_node_traits<void *>>="next_"^v"prev_"^v}}}}"onDestructionCallbacks_"{Synchronized<boost::intrusive::list<folly::EventBase::OnDestructionCallback>, folly::SharedMutexImpl<false>>="datum_"{list<folly::EventBase::OnDestructionCallback>="data_"{data_t="root_plus_size_"{root_plus_size="size_"Q"m_header"{default_header_holder<boost::intrusive::list_node_traits<void *>>="next_"^v"prev_"^v}}}}"mutex_"{SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>="__a_value"AI}}}}"preDestructionCallbacks_"{Synchronized<boost::intrusive::list<folly::EventBase::OnDestructionCallback>, folly::SharedMutexImpl<false>>="datum_"{list<folly::EventBase::OnDestructionCallback>="data_"{data_t="root_plus_size_"{root_plus_size="size_"Q"m_header"{default_header_holder<boost::intrusive::list_node_traits<void *>>="next_"^v"prev_"^v}}}}"mutex_"{SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>="__a_value"AI}}}}"runOnceCallbacks_"^v"stop_"{atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}"queue_"{unique_ptr<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner>, std::default_delete<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner>>>="__ptr_"{__compressed_pair<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner> *, std::default_delete<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner>>>="__value_"^v}}"loopKeepAliveCount_"{atomic<unsigned long>="__a_"{__cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>>="__a_value"AQ}}"loopKeepAliveActive_"B"maxLatency_"{duration<long long, std::ratio<1, 1000000>>="__rep_"q}"avgLoopTime_"{SmoothLoopTime="expCoeff_"d"value_"d"buffer_time_"{duration<long long, std::ratio<1, 1000000>>="__rep_"q}"busy_buffer_"{duration<long long, std::ratio<1, 1000000>>="__rep_"q}"buffer_cnt_"Q}"maxLatencyLoopTime_"{SmoothLoopTime="expCoeff_"d"value_"d"buffer_time_"{duration<long long, std::ratio<1, 1000000>>="__rep_"q}"busy_buffer_"{duration<long long, std::ratio<1, 1000000>>="__rep_"q}"buffer_cnt_"Q}"dampenMaxLatency_"B"maxLatencyCob_"{Function<void ()>="data_"(Data="big"^v"bigt"{BigTrivialLayout="big"^v"size"Q"align"Q}"tiny"{type="__lx"[48C]})"call_"^?"exec_"^?}"nextLoopCnt_"Q"latestLoopCnt_"Q"startWork_"{time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>="__d_"{duration<long long, std::ratio<1, 1000000000>>="__rep_"q}}"observer_"{shared_ptr<folly::EventBaseObserver>="__ptr_"^{EventBaseObserver}"__cntrl_"^{__shared_weak_count}}"observerSampleCount_"I"executionObserverList_"{list<folly::ExecutionObserver, boost::intrusive::constant_time_size<false>>="data_"{data_t="root_plus_size_"{root_plus_size="m_header"{default_header_holder<boost::intrusive::list_node_traits<void *>>="next_"^v"prev_"^v}}}}"name_"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"localStorage_"{F14FastMap<unsigned long, std::unique_ptr<void, void (*)(void *)>, folly::HeterogeneousAccessHash<unsigned long>, folly::HeterogeneousAccessEqualTo<unsigned long>, std::allocator<std::pair<const unsigned long, std::unique_ptr<void, void (*)(void *)>>>>="__table_"{__hash_table<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessHash<unsigned long>, folly::HeterogeneousAccessEqualTo<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessEqualTo<unsigned long>, folly::HeterogeneousAccessHash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessHash<unsigned long>, folly::HeterogeneousAccessEqualTo<unsigned long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessEqualTo<unsigned long>, folly::HeterogeneousAccessHash<unsigned long>>>="__value_"f}}}"localStorageToDtor_"{Synchronized<folly::F14FastSet<folly::detail::EventBaseLocalBase *>, folly::SharedMutexImpl<false>>="datum_"{F14FastSet<folly::detail::EventBaseLocalBase *, folly::HeterogeneousAccessHash<folly::detail::EventBaseLocalBase *>, folly::HeterogeneousAccessEqualTo<folly::detail::EventBaseLocalBase *>, std::allocator<folly::detail::EventBaseLocalBase *>>="__table_"{__hash_table<folly::detail::EventBaseLocalBase *, folly::HeterogeneousAccessHash<folly::detail::EventBaseLocalBase *>, folly::HeterogeneousAccessEqualTo<folly::detail::EventBaseLocalBase *>, std::allocator<folly::detail::EventBaseLocalBase *>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *>, std::allocator<std::__hash_node<folly::detail::EventBaseLocalBase *, void *>>>="__value_"{__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, folly::HeterogeneousAccessHash<folly::detail::EventBaseLocalBase *>>="__value_"Q}"__p3_"{__compressed_pair<float, folly::HeterogeneousAccessEqualTo<folly::detail::EventBaseLocalBase *>>="__value_"f}}}"mutex_"{SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>="__a_value"AI}}}}"virtualEventBaseInitFlag_"{basic_once_flag<folly::SharedMutexImpl<false>, std::atomic>="called_"{atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}"mutex_"{SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>="__a_value"AI}}}}"virtualEventBase_"{unique_ptr<folly::VirtualEventBase, std::default_delete<folly::VirtualEventBase>>="__ptr_"{__compressed_pair<folly::VirtualEventBase *, std::default_delete<folly::VirtualEventBase>>="__value_"^{VirtualEventBase}}}"evb_"{unique_ptr<folly::EventBaseBackendBase, std::default_delete<folly::EventBaseBackendBase>>="__ptr_"{__compressed_pair<folly::EventBaseBackendBase *, std::default_delete<folly::EventBaseBackendBase>>="__value_"^{EventBaseBackendBase}}}"threadIdCollector_"{unique_ptr<folly::EventBase::ThreadIdCollector, std::default_delete<folly::EventBase::ThreadIdCollector>>="__ptr_"{__compressed_pair<folly::EventBase::ThreadIdCollector *, std::default_delete<folly::EventBase::ThreadIdCollector>>="__value_"^{ThreadIdCollector}}}}, {unique_ptr<AutoreleaseLoopCallback, std::default_delete<AutoreleaseLoopCallback>>="__ptr_"{__compressed_pair<AutoreleaseLoopCallback *, std::default_delete<AutoreleaseLoopCallback>>="__value_"^{AutoreleaseLoopCallback}}};

@interface FBLigerProcessor : NSObject {
  /* instance variables */
  struct unique_ptr<AutoreleaseLoopCallback, std::default_delete<AutoreleaseLoopCallback>> { struct __compressed_pair<AutoreleaseLoopCallback *, std::default_delete<AutoreleaseLoopCallback>> { struct AutoreleaseLoopCallback *__value_; } __ptr_; } _loopCallback;
  struct EventBase { undefined * *_vptr$TimeoutManager; struct unique_ptr<folly::TimeoutManager::CobTimeouts, std::default_delete<folly::TimeoutManager::CobTimeouts>> { struct __compressed_pair<folly::TimeoutManager::CobTimeouts *, std::default_delete<folly::TimeoutManager::CobTimeouts>> { struct CobTimeouts *__value_; } __ptr_; } cobTimeouts_; undefined * *_vptr$DrivableExecutor; undefined * *_vptr$IOExecutor; undefined * *_vptr$SequencedExecutor; undefined * *_vptr$ScheduledExecutor; undefined * *_vptr$GetThreadIdCollector; struct duration<long long, std::ratio<1, 1000>> { long long __rep_; } intervalDuration_; BOOL enableTimeMeasurement_; BOOL strictLoopThread_; struct optional<folly::EventBase::LoopState> { union { char __null_state_; struct LoopState { struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } prev; struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } idleStart; } __val_; } x0; BOOL __engaged_; } loopState_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { atomic  __a_value; int x0; } __a_; } loopTid_; struct atomic<std::__thread_id> { struct __cxx_atomic_impl<std::__thread_id, std::__cxx_atomic_base_impl<std::__thread_id>> { atomic  __a_value; struct __thread_id x0; } __a_; } loopThread_; struct unique_ptr<folly::HHWheelTimerBase<std::chrono::milliseconds>, folly::DelayedDestruction::Destructor> { struct __compressed_pair<folly::HHWheelTimerBase<std::chrono::milliseconds> *, folly::DelayedDestruction::Destructor> { void *__value_; } __ptr_; } wheelTimer_; struct list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>> { struct data_t { struct root_plus_size { struct default_header_holder<boost::intrusive::list_node_traits<void *>> { void *next_; void *prev_; } m_header; } root_plus_size_; } data_; } loopCallbacks_; struct list<folly::EventBase::LoopCallback, boost::intrusive::constant_time_size<false>> { struct data_t { struct root_plus_size { struct default_header_holder<boost::intrusive::list_node_traits<void *>> { void *next_; void *prev_; } m_header; } root_plus_size_; } data_; } runBeforeLoopCallbacks_; struct Synchronized<boost::intrusive::list<folly::EventBase::OnDestructionCallback>, folly::SharedMutexImpl<false>> { struct list<folly::EventBase::OnDestructionCallback> { struct data_t { struct root_plus_size { unsigned long long size_; struct default_header_holder<boost::intrusive::list_node_traits<void *>> { void *next_; void *prev_; } m_header; } root_plus_size_; } data_; } datum_; struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { atomic  __a_value; unsigned int x0; } __a_; } state_; } mutex_; } onDestructionCallbacks_; struct Synchronized<boost::intrusive::list<folly::EventBase::OnDestructionCallback>, folly::SharedMutexImpl<false>> { struct list<folly::EventBase::OnDestructionCallback> { struct data_t { struct root_plus_size { unsigned long long size_; struct default_header_holder<boost::intrusive::list_node_traits<void *>> { void *next_; void *prev_; } m_header; } root_plus_size_; } data_; } datum_; struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { atomic  __a_value; unsigned int x0; } __a_; } state_; } mutex_; } preDestructionCallbacks_; void *runOnceCallbacks_; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } stop_; struct unique_ptr<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner>, std::default_delete<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner>>> { struct __compressed_pair<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner> *, std::default_delete<folly::EventBaseAtomicNotificationQueue<folly::Function<void ()>, folly::EventBase::FuncRunner>>> { void *__value_; } __ptr_; } queue_; struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { atomic  __a_value; unsigned long long x0; } __a_; } loopKeepAliveCount_; BOOL loopKeepAliveActive_; struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } maxLatency_; struct SmoothLoopTime { double expCoeff_; double value_; struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } buffer_time_; struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } busy_buffer_; unsigned long long buffer_cnt_; } avgLoopTime_; struct SmoothLoopTime { double expCoeff_; double value_; struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } buffer_time_; struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } busy_buffer_; unsigned long long buffer_cnt_; } maxLatencyLoopTime_; BOOL dampenMaxLatency_; struct Function<void ()> { union Data { void *big; struct BigTrivialLayout { void *big; unsigned long long size; unsigned long long align; } bigt; struct type { unsigned char x[48] __lx; } tiny; } data_; undefined *call_; undefined *exec_; } maxLatencyCob_; unsigned long long nextLoopCnt_; unsigned long long latestLoopCnt_; struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } startWork_; struct shared_ptr<folly::EventBaseObserver> { struct EventBaseObserver *__ptr_; struct __shared_weak_count *__cntrl_; } observer_; unsigned int observerSampleCount_; struct list<folly::ExecutionObserver, boost::intrusive::constant_time_size<false>> { struct data_t { struct root_plus_size { struct default_header_holder<boost::intrusive::list_node_traits<void *>> { void *next_; void *prev_; } m_header; } root_plus_size_; } data_; } executionObserverList_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } name_; struct F14FastMap<unsigned long, std::unique_ptr<void, void (*)(void *)>, folly::HeterogeneousAccessHash<unsigned long>, folly::HeterogeneousAccessEqualTo<unsigned long>, std::allocator<std::pair<const unsigned long, std::unique_ptr<void, void (*)(void *)>>>> { struct __hash_table<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessHash<unsigned long>, folly::HeterogeneousAccessEqualTo<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessEqualTo<unsigned long>, folly::HeterogeneousAccessHash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessHash<unsigned long>, folly::HeterogeneousAccessEqualTo<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<void, void (*)(void *)>>, folly::HeterogeneousAccessEqualTo<unsigned long>, folly::HeterogeneousAccessHash<unsigned long>>> { float __value_; } __p3_; } __table_; } localStorage_; struct Synchronized<folly::F14FastSet<folly::detail::EventBaseLocalBase *>, folly::SharedMutexImpl<false>> { struct F14FastSet<folly::detail::EventBaseLocalBase *, folly::HeterogeneousAccessHash<folly::detail::EventBaseLocalBase *>, folly::HeterogeneousAccessEqualTo<folly::detail::EventBaseLocalBase *>, std::allocator<folly::detail::EventBaseLocalBase *>> { struct __hash_table<folly::detail::EventBaseLocalBase *, folly::HeterogeneousAccessHash<folly::detail::EventBaseLocalBase *>, folly::HeterogeneousAccessEqualTo<folly::detail::EventBaseLocalBase *>, std::allocator<folly::detail::EventBaseLocalBase *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *>, std::allocator<std::__hash_node<folly::detail::EventBaseLocalBase *, void *>>> { struct __hash_node_base<std::__hash_node<folly::detail::EventBaseLocalBase *, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, folly::HeterogeneousAccessHash<folly::detail::EventBaseLocalBase *>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, folly::HeterogeneousAccessEqualTo<folly::detail::EventBaseLocalBase *>> { float __value_; } __p3_; } __table_; } datum_; struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { atomic  __a_value; unsigned int x0; } __a_; } state_; } mutex_; } localStorageToDtor_; struct basic_once_flag<folly::SharedMutexImpl<false>, std::atomic> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } called_; struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { atomic  __a_value; unsigned int x0; } __a_; } state_; } mutex_; } virtualEventBaseInitFlag_; struct unique_ptr<folly::VirtualEventBase, std::default_delete<folly::VirtualEventBase>> { struct __compressed_pair<folly::VirtualEventBase *, std::default_delete<folly::VirtualEventBase>> { struct VirtualEventBase *__value_; } __ptr_; } virtualEventBase_; struct unique_ptr<folly::EventBaseBackendBase, std::default_delete<folly::EventBaseBackendBase>> { struct __compressed_pair<folly::EventBaseBackendBase *, std::default_delete<folly::EventBaseBackendBase>> { struct EventBaseBackendBase *__value_; } __ptr_; } evb_; struct unique_ptr<folly::EventBase::ThreadIdCollector, std::default_delete<folly::EventBase::ThreadIdCollector>> { struct __compressed_pair<folly::EventBase::ThreadIdCollector *, std::default_delete<folly::EventBase::ThreadIdCollector>> { struct ThreadIdCollector *__value_; } __ptr_; } threadIdCollector_; } _eventBase;
}

/* class methods */
+ (id)instance;

/* instance methods */
- (id)init;
- (void *)eventBase;
- (void)ligerMain;
@end

#endif /* FBLigerProcessor_h */
