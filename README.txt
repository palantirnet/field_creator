This module creates base field configuration and field instances. It does so
upon enabling.

To do this task, the module pulls "prototypical" base field configuration from
the features module prototypical_fields_feature. It also reads in a csv
export of from the build spec of all field machine names. It then creates a base
field configuration for every machine name that has a matching prototypical
field configuration. It follows the same pattern with field instances.

To add more field types:
1. First add by hand a field (like field_date_reviewed_public) to an install of
this site.
2. Featurize that base field configuration and instance to the two base features
prototypical_fields_feature and prototypical_field_instances_feature.
3. Update fields_creator_get_prototypical_fields_by_type() and
fields_creator_get_prototypical_field_instances_by_type();
4. Enable this module again on a fresh site. Simply enabling and disabling the
module might also work.
