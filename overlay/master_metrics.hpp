#ifndef __OVERLAY_MASTER_METRICS_HPP__
#define __OVERLAY_MASTER_METRICS_HPP__

#include <process/metrics/counter.hpp>
#include <process/metrics/push_gauge.hpp>

namespace mesos {
namespace modules {
namespace overlay {
namespace master {

struct Metrics
{
  Metrics();
  ~Metrics();

  // Indicates that the overlay master process is in the middle
  // of recovering its state. Under normal cirumstances,
  // it should be one only for a brief period of time after
  // start up.
  process::metrics::PushGauge recovering;

  // Counts the number of IPv4 address allocation failures.
  process::metrics::Counter ip_allocation_failures;

  // Counts the number of IPv6 address allocation failures.
  process::metrics::Counter ip6_allocation_failures;

  // Counts the number of IPv4 subnet allocation failures.
  process::metrics::Counter subnet_allocation_failures;

  // Counts the number of IPv6 subnet allocation failures.
  process::metrics::Counter subnet6_allocation_failures;

  // Counts the number of network bridge allocation failures.
  process::metrics::Counter bridge_allocation_failures;
};

} // namespace master {
} // namespace overlay {
} // namespace modules {
} // namespace mesos {


#endif // __OVERLAY_MASTER_METRICS_HPP__
