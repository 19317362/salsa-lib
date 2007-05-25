static inline
int snd_ctl_open_lconf(snd_ctl_t **ctlp, const char *name,
		       int mode, snd_config_t *lconf)
{
	return -ENODEV;
}

static inline
const char *snd_ctl_name(snd_ctl_t *ctl)
{
	return ctl->name;
}

static inline
snd_ctl_type_t snd_ctl_type(snd_ctl_t *ctl)
{
	return ctl->type;
}

static inline
int snd_ctl_poll_descriptors_count(snd_ctl_t *ctl)
{
	return 1;
}

static inline
int snd_ctl_poll_descriptors(snd_ctl_t *ctl, struct pollfd *pfds,
			     unsigned int space)
{
	pfds->fd = ctl->pollfd;
	return 0;
}

static inline
int snd_ctl_poll_descriptors_revents(snd_ctl_t *ctl, struct pollfd *pfds,
				     unsigned int nfds, unsigned short *revents)
{
	*revents = pfds->revents;
	return 0;
}

static inline
int snd_ctl_subscribe_events(snd_ctl_t *ctl, int subscribe)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_SUBSCRIBE_EVENTS, &subscribe) < 0)
		return -errno;
	return subscribe;
}

static inline
int snd_ctl_card_info(snd_ctl_t *ctl, snd_ctl_card_info_t *info)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_CARD_INFO, info) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_list(snd_ctl_t *ctl, snd_ctl_elem_list_t *list)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_LIST, list) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_info(snd_ctl_t *ctl, snd_ctl_elem_info_t *info)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_INFO, info) < 0)
		return -errno;
	return 0;
}

static inline
static int snd_ctl_elem_add(snd_ctl_t *handle, snd_ctl_elem_info_t *info)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_ADD, info) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_remove(snd_ctl_t *ctl, snd_ctl_elem_id_t *id)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_REMOVE, id) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_read(snd_ctl_t *ctl, snd_ctl_elem_value_t *control)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_READ, control) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_write(snd_ctl_t *ctl, snd_ctl_elem_value_t *control)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_WRITE, control) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_lock(snd_ctl_t *ctl, snd_ctl_elem_id_t *id)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_LOCK, id) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_elem_unlock(snd_ctl_t *ctl, snd_ctl_elem_id_t *id)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_ELEM_UNLOCK, id) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_hwdep_next_device(snd_ctl_t *ctl, int *device)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_HWDEP_NEXT_DEVICE, device) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_hwdep_info(snd_ctl_t *ctl, snd_hwdep_info_t * info)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_HWDEP_INFO, info) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_pcm_next_device(snd_ctl_t *ctl, int * device)
{
	if (ioctl(hw->fd, SNDRV_CTL_IOCTL_PCM_INFO, info) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_pcm_info(snd_ctl_t *ctl, snd_pcm_info_t * info)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_PCM_INFO, info) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_pcm_prefer_subdevice(snd_ctl_t *ctl, int subdev)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_PCM_PREFER_SUBDEVICE, &subdev) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_rawmidi_next_device(snd_ctl_t *ctl, int * device)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_RAWMIDI_NEXT_DEVICE, device) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_rawmidi_info(snd_ctl_t *ctl, snd_rawmidi_info_t * info)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_RAWMIDI_INFO, info) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_rawmidi_prefer_subdevice(snd_ctl_t *ctl, int subdev)
{
	if (ioctl(ctl->fd, SNDRV_CTL_IOCTL_RAWMIDI_PREFER_SUBDEVICE, &subdev) < 0)
		return -errno;
	return 0;
}

static inline
int snd_ctl_set_power_state(snd_ctl_t *ctl, unsigned int state)
{
	return -ENXIO;
}

static inline
int snd_ctl_get_power_state(snd_ctl_t *ctl, unsigned int *state)
{
	return -ENXIO;
}

static inline
int snd_ctl_read(snd_ctl_t *ctl, snd_ctl_event_t *event)
{
	ssize_t res = read(ctl->fd, event, sizeof(*event));
	if (res <= 0)
		return -errno;
	return 1;
}


extern const char *_snd_ctl_elem_type_names[];
extern const char *_snd_ctl_elem_iface_names[];
extern const char *_snd_ctl_event_type_names[];

#define snd_ctl_elem_type_name(type)	_snd_ctl_elem_type_names[type]
#define snd_ctl_elem_iface_name(iface)	_snd_ctl_elem_iface_names[iface]
#define snd_ctl_event_type_name(type)	_snd_ctl_event_type_names[type]

static inline
int snd_ctl_elem_list_alloc_space(snd_ctl_elem_list_t *obj,
				  unsigned int entries)
{
	free(obj->pids);
	obj->pids = calloc(entries, sizeof(*obj->pids));
	if (!obj->pids) {
		obj->space = 0;
		return -ENOMEM;
	}
	obj->space = entries;
	return 0;
}  

static inline
void snd_ctl_elem_list_free_space(snd_ctl_elem_list_t *obj)
{
	free(obj->pids);
	obj->pids = NULL;
	obj->space = 0;
}

static inline
unsigned int snd_ctl_event_elem_get_mask(const snd_ctl_event_t *obj)
{
	return obj->data.elem.mask;
}

static inline
void snd_ctl_event_elem_get_id(const snd_ctl_event_t *obj,
			       snd_ctl_elem_id_t *ptr)
{
	*ptr = obj->data.elem.id;
}

static inline
unsigned int snd_ctl_event_elem_get_numid(const snd_ctl_event_t *obj)
{
	return obj->data.elem.id.numid;
}

static inline
snd_ctl_elem_iface_t snd_ctl_event_elem_get_interface(const snd_ctl_event_t *obj)
{
	return obj->data.elem.id.iface;
}

static inline
unsigned int snd_ctl_event_elem_get_device(const snd_ctl_event_t *obj)
{
	return obj->data.elem.id.device;
}

static inline
unsigned int snd_ctl_event_elem_get_subdevice(const snd_ctl_event_t *obj)
{
	return obj->data.elem.id.subdevice;
}

static inline
const char *snd_ctl_event_elem_get_name(const snd_ctl_event_t *obj)
{
	return (const char *)obj->data.elem.id.name;
}

static inline
unsigned int snd_ctl_event_elem_get_index(const snd_ctl_event_t *obj)
{
	return obj->data.elem.id.index;
}

static inline
size_t snd_ctl_elem_id_sizeof(void)
{
	return sizeof(snd_ctl_elem_id_t);
}

static inline
int snd_ctl_elem_id_malloc(snd_ctl_elem_id_t **ptr)
{
	*ptr = calloc(1, sizeof(snd_ctl_elem_id_t));
	if (!*ptr)
		return -ENOMEM;
	return 0;
}

static inline
void snd_ctl_elem_id_free(snd_ctl_elem_id_t *obj)
{
	free(obj);
}

static inline
void snd_ctl_elem_id_clear(snd_ctl_elem_id_t *obj)
{
	memset(obj, 0, sizeof(snd_ctl_elem_id_t));
}

static inline
void snd_ctl_elem_id_copy(snd_ctl_elem_id_t *dst, const snd_ctl_elem_id_t *src)
{
	*dst = *src;
}

static inline
unsigned int snd_ctl_elem_id_get_numid(const snd_ctl_elem_id_t *obj)
{
	return obj->numid;
}

static inline
snd_ctl_elem_iface_t snd_ctl_elem_id_get_interface(const snd_ctl_elem_id_t *obj)
{
	return obj->iface;
}

static inline
unsigned int snd_ctl_elem_id_get_device(const snd_ctl_elem_id_t *obj)
{
	return obj->device;
}

static inline
unsigned int snd_ctl_elem_id_get_subdevice(const snd_ctl_elem_id_t *obj)
{
	return obj->subdevice;
}

static inline
const char *snd_ctl_elem_id_get_name(const snd_ctl_elem_id_t *obj)
{
	return (const char *)obj->name;
}

static inline
unsigned int snd_ctl_elem_id_get_index(const snd_ctl_elem_id_t *obj)
{
	return obj->index;
}

static inline
void snd_ctl_elem_id_set_numid(snd_ctl_elem_id_t *obj, unsigned int val)
{
	obj->numid = val;
}

static inline
void snd_ctl_elem_id_set_interface(snd_ctl_elem_id_t *obj,
				   snd_ctl_elem_iface_t val)
{
	obj->iface = val;
}

static inline
void snd_ctl_elem_id_set_device(snd_ctl_elem_id_t *obj, unsigned int val)
{
	obj->device = val;
}

static inline
void snd_ctl_elem_id_set_subdevice(snd_ctl_elem_id_t *obj, unsigned int val)
{
	obj->subdevice = val;
}

static inline
void snd_ctl_elem_id_set_name(snd_ctl_elem_id_t *obj, const char *val)
{
	strncpy((char *)obj->name, val, sizeof(obj->name));
}

static inline
void snd_ctl_elem_id_set_index(snd_ctl_elem_id_t *obj, unsigned int val)
{
	obj->index = val;
}

static inline
size_t snd_ctl_card_info_sizeof(void)
{
	return sizeof(snd_ctl_card_info_t);
}

static inline
int snd_ctl_card_info_malloc(snd_ctl_card_info_t **ptr)
{
	*ptr = calloc(1, sizeof(snd_ctl_card_info_t));
	if (!*ptr)
		return -ENOMEM;
	return 0;
}

static inline
void snd_ctl_card_info_free(snd_ctl_card_info_t *obj)
{
	free(obj);
}

static inline
void snd_ctl_card_info_clear(snd_ctl_card_info_t *obj)
{
	memset(obj, 0, sizeof(snd_ctl_card_info_t));
}

static inline
void snd_ctl_card_info_copy(snd_ctl_card_info_t *dst,
			    const snd_ctl_card_info_t *src)
{
	*dst = *src;
}

static inline
int snd_ctl_card_info_get_card(const snd_ctl_card_info_t *obj)
{
	return obj->card;
}

static inline
const char *snd_ctl_card_info_get_id(const snd_ctl_card_info_t *obj)
{
	return (const char *)obj->id;
}

static inline
const char *snd_ctl_card_info_get_driver(const snd_ctl_card_info_t *obj)
{
	return (const char *)obj->driver;
}

static inline
const char *snd_ctl_card_info_get_name(const snd_ctl_card_info_t *obj)
{
	return (const char *)obj->name;
}

static inline
const char *snd_ctl_card_info_get_longname(const snd_ctl_card_info_t *obj)
{
	return (const char *)obj->longname;
}

static inline
const char *snd_ctl_card_info_get_mixername(const snd_ctl_card_info_t *obj)
{
	return (const char *)obj->mixername;
}

static inline
const char *snd_ctl_card_info_get_components(const snd_ctl_card_info_t *obj)
{
	return (const char *)obj->components;
}

static inline
size_t snd_ctl_event_sizeof(void)
{
	return sizeof(snd_ctl_event_t);
}

static inline
int snd_ctl_event_malloc(snd_ctl_event_t **ptr)
{
	*ptr = calloc(1, sizeof(snd_ctl_event_t));
	if (!*ptr)
		return -ENOMEM;
	return 0;
}

static inline
void snd_ctl_event_free(snd_ctl_event_t *obj)
{
	free(obj);
}

static inline
void snd_ctl_event_clear(snd_ctl_event_t *obj)
{
	memset(obj, 0, sizeof(snd_ctl_event_t));
}

static inline
void snd_ctl_event_copy(snd_ctl_event_t *dst, const snd_ctl_event_t *src)
{
	*dst = *src;
}

static inline
snd_ctl_event_type_t snd_ctl_event_get_type(const snd_ctl_event_t *obj)
{
	return obj->type;
}

static inline
size_t snd_ctl_elem_list_sizeof(void)
{
	return sizeof(snd_ctl_elem_list_t);
}

static inline
int snd_ctl_elem_list_malloc(snd_ctl_elem_list_t **ptr)
{
	*ptr = calloc(1, sizeof(snd_ctl_elem_list_t));
	if (!*ptr)
		return -ENOMEM;
	return 0;
}

static inline
void snd_ctl_elem_list_free(snd_ctl_elem_list_t *obj)
{
	free(obj);
}

static inline
void snd_ctl_elem_list_clear(snd_ctl_elem_list_t *obj)
{
	memset(obj, 0, sizeof(snd_ctl_elem_list_t));
}

static inline
void snd_ctl_elem_list_copy(snd_ctl_elem_list_t *dst,
			    const snd_ctl_elem_list_t *src)
{
	*dst = *src;
}

static inline
void snd_ctl_elem_list_set_offset(snd_ctl_elem_list_t *obj, unsigned int val)
{
	obj->offset = val;
}

static inline
unsigned int snd_ctl_elem_list_get_used(const snd_ctl_elem_list_t *obj)
{
	return obj->used;
}

static inline
unsigned int snd_ctl_elem_list_get_count(const snd_ctl_elem_list_t *obj)
{
	return obj->count;
}

static inline
void snd_ctl_elem_list_get_id(const snd_ctl_elem_list_t *obj,
			      unsigned int idx, snd_ctl_elem_id_t *ptr)
{
	*ptr = obj->pids[idx];
}

static inline
unsigned int snd_ctl_elem_list_get_numid(const snd_ctl_elem_list_t *obj,
					 unsigned int idx)
{
	return obj->pids[idx].numid;
}

static inline
snd_ctl_elem_iface_t snd_ctl_elem_list_get_interface(const snd_ctl_elem_list_t *obj,
						     unsigned int idx)
{
	return obj->pids[idx].iface;
}

static inline
unsigned int snd_ctl_elem_list_get_device(const snd_ctl_elem_list_t *obj,
					  unsigned int idx)
{
	return obj->pids[idx].device;
}

static inline
unsigned int snd_ctl_elem_list_get_subdevice(const snd_ctl_elem_list_t *obj,
					     unsigned int idx)
{
	return obj->pids[idx].subdevice;
}

static inline
const char *snd_ctl_elem_list_get_name(const snd_ctl_elem_list_t *obj,
				       unsigned int idx)
{
	return (const char *)obj->pids[idx].name;
}

static inline
unsigned int snd_ctl_elem_list_get_index(const snd_ctl_elem_list_t *obj,
					 unsigned int idx)
{
	return obj->pids[idx].index;
}

static inline
size_t snd_ctl_elem_info_sizeof(void)
{
	return sizeof(snd_ctl_elem_info_t);
}

static inline
int snd_ctl_elem_info_malloc(snd_ctl_elem_info_t **ptr)
{
	*ptr = calloc(1, sizeof(snd_ctl_elem_info_t));
	if (!*ptr)
		return -ENOMEM;
	return 0;
}

static inline
void snd_ctl_elem_info_free(snd_ctl_elem_info_t *obj)
{
	free(obj);
}

static inline
void snd_ctl_elem_info_clear(snd_ctl_elem_info_t *obj)
{
	memset(obj, 0, sizeof(snd_ctl_elem_info_t));
}

static inline
void snd_ctl_elem_info_copy(snd_ctl_elem_info_t *dst,
			    const snd_ctl_elem_info_t *src)
{
	*dst = *src;
}

static inline
snd_ctl_elem_type_t snd_ctl_elem_info_get_type(const snd_ctl_elem_info_t *obj)
{
	return obj->type;
}

static inline
int snd_ctl_elem_info_is_readable(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_READ);
}

static inline
int snd_ctl_elem_info_is_writable(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_WRITE);
}

static inline
int snd_ctl_elem_info_is_volatile(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_VOLATILE);
}

static inline
int snd_ctl_elem_info_is_inactive(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_INACTIVE);
}

static inline
int snd_ctl_elem_info_is_locked(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_LOCK);
}

static inline
int snd_ctl_elem_info_is_owner(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_OWNER);
}

static inline
int snd_ctl_elem_info_is_user(const snd_ctl_elem_info_t *obj)
{
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_USER);
}

static inline
int snd_ctl_elem_info_is_tlv_readable(const snd_ctl_elem_info_t *obj)
{
#ifdef HAVE_DB_SUPPORT
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_TLV_READ);
#else
	return 0;
#endif
}

static inline
int snd_ctl_elem_info_is_tlv_writable(const snd_ctl_elem_info_t *obj)
{
#ifdef HAVE_DB_SUPPORT
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_TLV_WRITE);
#else
	return 0;
#endif
}

static inline
int snd_ctl_elem_info_is_tlv_commandable(const snd_ctl_elem_info_t *obj)
{
#ifdef HAVE_DB_SUPPORT
	return !!(obj->access & SNDRV_CTL_ELEM_ACCESS_TLV_COMMAND);
#else
	return 0;
#endif
}

static inline
pid_t snd_ctl_elem_info_get_owner(const snd_ctl_elem_info_t *obj)
{
	return obj->owner;
}

static inline
unsigned int snd_ctl_elem_info_get_count(const snd_ctl_elem_info_t *obj)
{
	return obj->count;
}

static inline
long snd_ctl_elem_info_get_min(const snd_ctl_elem_info_t *obj)
{
	return obj->value.integer.min;
}

static inline
long snd_ctl_elem_info_get_max(const snd_ctl_elem_info_t *obj)
{
	return obj->value.integer.max;
}

static inline
long snd_ctl_elem_info_get_step(const snd_ctl_elem_info_t *obj)
{
	return obj->value.integer.step;
}

static inline
long long snd_ctl_elem_info_get_min64(const snd_ctl_elem_info_t *obj)
{
	return obj->value.integer64.min;
}

static inline
long long snd_ctl_elem_info_get_max64(const snd_ctl_elem_info_t *obj)
{
	return obj->value.integer64.max;
}

static inline
long long snd_ctl_elem_info_get_step64(const snd_ctl_elem_info_t *obj)
{
	return obj->value.integer64.step;
}

static inline
unsigned int snd_ctl_elem_info_get_items(const snd_ctl_elem_info_t *obj)
{
	return obj->value.enumerated.items;
}

static inline
void snd_ctl_elem_info_set_item(snd_ctl_elem_info_t *obj, unsigned int val)
{
	obj->value.enumerated.item = val;
}

static inline
const char *snd_ctl_elem_info_get_item_name(const snd_ctl_elem_info_t *obj)
{
	return obj->value.enumerated.name;
}

static inline
int snd_ctl_elem_info_get_dimensions(const snd_ctl_elem_info_t *obj)
{
	int i;
	for (i = 3; i >= 0; i--)
		if (obj->dimen.d[i])
			break;
	return i + 1;
}

static inline
int snd_ctl_elem_info_get_dimension(const snd_ctl_elem_info_t *obj,
				    unsigned int idx)
{
	if (idx >= 3)
		return 0;
	return obj->dimen.d[idx];
}

static inline
void snd_ctl_elem_info_get_id(const snd_ctl_elem_info_t *obj,
			      snd_ctl_elem_id_t *ptr)
{
	*ptr = obj->id;
}

static inline
unsigned int snd_ctl_elem_info_get_numid(const snd_ctl_elem_info_t *obj)
{
	return obj->id.numid;
}

static inline
snd_ctl_elem_iface_t snd_ctl_elem_info_get_interface(const snd_ctl_elem_info_t *obj)
{
	return obj->id.iface;
}

static inline
unsigned int snd_ctl_elem_info_get_device(const snd_ctl_elem_info_t *obj)
{
	return obj->id.device;
}

static inline
unsigned int snd_ctl_elem_info_get_subdevice(const snd_ctl_elem_info_t *obj)
{
	return obj->id.subdevice;
}

static inline
const char *snd_ctl_elem_info_get_name(const snd_ctl_elem_info_t *obj)
{
	return (const char *)obj->id.name;
}

static inline
unsigned int snd_ctl_elem_info_get_index(const snd_ctl_elem_info_t *obj)
{
	return obj->id.index;
}

static inline
void snd_ctl_elem_info_set_id(snd_ctl_elem_info_t *obj,
			      const snd_ctl_elem_id_t *ptr)
{
	obj->id = *ptr;
}

static inline
void snd_ctl_elem_info_set_numid(snd_ctl_elem_info_t *obj, unsigned int val)
{
	obj->id.numid = val;
}

static inline
void snd_ctl_elem_info_set_interface(snd_ctl_elem_info_t *obj,
				     snd_ctl_elem_iface_t val)
{
	obj->id.iface = val;
}

static inline
void snd_ctl_elem_info_set_device(snd_ctl_elem_info_t *obj, unsigned int val)
{
	obj->id.device = val;
}

static inline
void snd_ctl_elem_info_set_subdevice(snd_ctl_elem_info_t *obj,
				     unsigned int val)
{
	obj->id.subdevice = val;
}

static inline
void snd_ctl_elem_info_set_name(snd_ctl_elem_info_t *obj, const char *val)
{
	strncpy((char *)obj->id.name, val, sizeof(obj->id.name));
}

static inline
void snd_ctl_elem_info_set_index(snd_ctl_elem_info_t *obj, unsigned int val)
{
	obj->id.index = val;
}

static inline
size_t snd_ctl_elem_value_sizeof(void)
{
	return sizeof(snd_ctl_elem_value_t);
}

static inline
int snd_ctl_elem_value_malloc(snd_ctl_elem_value_t **ptr)
{
	*ptr = calloc(1, sizeof(snd_ctl_elem_value_t));
	if (!*ptr)
		return -ENOMEM;
	return 0;
}

static inline
void snd_ctl_elem_value_free(snd_ctl_elem_value_t *obj)
{
	free(obj);
}

static inline
void snd_ctl_elem_value_clear(snd_ctl_elem_value_t *obj)
{
	memset(obj, 0, sizeof(snd_ctl_elem_value_t));
}

static inline
void snd_ctl_elem_value_copy(snd_ctl_elem_value_t *dst,
			     const snd_ctl_elem_value_t *src)
{
	*dst = *src;
}

static inline
void snd_ctl_elem_value_get_id(const snd_ctl_elem_value_t *obj,
			       snd_ctl_elem_id_t *ptr)
{
	*ptr = obj->id;
}

static inline
unsigned int snd_ctl_elem_value_get_numid(const snd_ctl_elem_value_t *obj)
{
	return obj->id.numid;
}

static inline
snd_ctl_elem_iface_t snd_ctl_elem_value_get_interface(const snd_ctl_elem_value_t *obj)
{
	return obj->id.iface;
}

static inline
unsigned int snd_ctl_elem_value_get_device(const snd_ctl_elem_value_t *obj)
{
	return obj->id.device;
}

static inline
unsigned int snd_ctl_elem_value_get_subdevice(const snd_ctl_elem_value_t *obj)
{
	return obj->id.subdevice;
}

static inline
const char *snd_ctl_elem_value_get_name(const snd_ctl_elem_value_t *obj)
{
	return (const char *)obj->id.name;
}

static inline
unsigned int snd_ctl_elem_value_get_index(const snd_ctl_elem_value_t *obj)
{
	return obj->id.index;
}

static inline
void snd_ctl_elem_value_set_id(snd_ctl_elem_value_t *obj,
			       const snd_ctl_elem_id_t *ptr)
{
	obj->id = *ptr;
}

static inline
void snd_ctl_elem_value_set_numid(snd_ctl_elem_value_t *obj, unsigned int val)
{
	obj->id.numid = val;
}

static inline
void snd_ctl_elem_value_set_interface(snd_ctl_elem_value_t *obj,
				      snd_ctl_elem_iface_t val)
{
	obj->id.iface = val;
}

static inline
void snd_ctl_elem_value_set_device(snd_ctl_elem_value_t *obj, unsigned int val)
{
	obj->id.device = val;
}

static inline
void snd_ctl_elem_value_set_subdevice(snd_ctl_elem_value_t *obj,
				      unsigned int val)
{
	obj->id.subdevice = val;
}

static inline
void snd_ctl_elem_value_set_name(snd_ctl_elem_value_t *obj, const char *val)
{
	strncpy((char *)obj->id.name, val, sizeof(obj->id.name));
}

static inline
void snd_ctl_elem_value_set_index(snd_ctl_elem_value_t *obj, unsigned int val)
{
	obj->id.index = val;
}

static inline
int snd_ctl_elem_value_get_boolean(const snd_ctl_elem_value_t *obj,
				   unsigned int idx)
{
	return obj->value.integer.value[idx];
}

static inline
long snd_ctl_elem_value_get_integer(const snd_ctl_elem_value_t *obj,
				    unsigned int idx)
{
	return obj->value.integer.value[idx];
}

static inline
long long snd_ctl_elem_value_get_integer64(const snd_ctl_elem_value_t *obj,
					   unsigned int idx)
{
	return obj->value.integer64.value[idx];
}

static inline
unsigned int snd_ctl_elem_value_get_enumerated(const snd_ctl_elem_value_t *obj,
					       unsigned int idx)
{
	return obj->value.enumerated.item[idx];
}

static inline
unsigned char snd_ctl_elem_value_get_byte(const snd_ctl_elem_value_t *obj,
					  unsigned int idx)
{
	return obj->value.bytes.data[idx];
}

static inline
void snd_ctl_elem_value_set_boolean(snd_ctl_elem_value_t *obj,
				    unsigned int idx, long val)
{
	obj->value.integer.value[idx] = val;
}

static inline
void snd_ctl_elem_value_set_integer(snd_ctl_elem_value_t *obj,
				    unsigned int idx, long val)
{
	obj->value.integer.value[idx] = val;
}

static inline
void snd_ctl_elem_value_set_integer64(snd_ctl_elem_value_t *obj,
				      unsigned int idx, long long val)
{
	obj->value.integer64.value[idx] = val;
}

static inline
void snd_ctl_elem_value_set_enumerated(snd_ctl_elem_value_t *obj,
				       unsigned int idx, unsigned int val)
{
	obj->value.enumerated.item[idx] = val;
}

static inline
void snd_ctl_elem_value_set_byte(snd_ctl_elem_value_t *obj, unsigned int idx,
				 unsigned char val)
{
	obj->value.bytes.data[idx] = val;
}

static inline
void snd_ctl_elem_set_bytes(snd_ctl_elem_value_t *obj, void *data, size_t size)
{
	if (size < sizeof(obj->value.bytes.data))
		memcpy(obj->value.bytes.data, data, size);
}

static inline
const void * snd_ctl_elem_value_get_bytes(const snd_ctl_elem_value_t *obj)
{
	return obj->value.bytes.data;
}

static inline
void snd_ctl_elem_value_get_iec958(const snd_ctl_elem_value_t *obj,
				   snd_aes_iec958_t *ptr)
{
	memcpy(ptr, &obj->value.iec958, sizeof(*ptr));
}

static inline
void snd_ctl_elem_value_set_iec958(snd_ctl_elem_value_t *obj,
				   const snd_aes_iec958_t *ptr)
{
	memcpy(&obj->value.iec958, ptr, sizeof(obj->value.iec958));
}

