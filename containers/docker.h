/*
 * (C) Copyright 2023
 * Stefano Babic <stefano.babic@swupdate.org>
 *
 * SPDX-License-Identifier:     GPL-2.0-only
 */

#pragma once

#include "server_utils.h"

/* Supported API */
#define DOCKER_API_VERSION		"1.43"

/* Default socker for docker */
#define DOCKER_DEFAULT_SOCKET		"/run/docker.sock"

/* For UDS connection, this is the URL */
#define DOCKER_SOCKET_URL			"http://localhost"

/* Docker base URL */

#define DOCKER_BASE_URL	DOCKER_SOCKET_URL DOCKER_API_VERSION "/"

typedef enum {
	DOCKER_IMAGE_LOAD,
	DOCKER_IMAGE_DELETE,
	DOCKER_IMAGE_PRUNE,
	DOCKER_CONTAINER_CREATE,
	DOCKER_CONTAINER_DELETE,
	DOCKER_CONTAINER_START,
	DOCKER_CONTAINER_STOP
} docker_services_t;
